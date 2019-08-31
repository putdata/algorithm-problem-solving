#include <bits/stdc++.h>
using namespace std;

vector<int> g, sa;
int n, t;
bool cmp(int x, int y) {
  if (g[x] == g[y]) return g[x + t] < g[y + t];
  return g[x] < g[y];
}

void getSA(string &s) {
  n = s.size();
  sa.resize(n); g.resize(n + 1);
  vector<int> tmpG(n + 1);
  for (int i = 0; i < n; i++) sa[i] = i, g[i] = s[i];
  for (t = 1; t < n; t <<= 1) {
    g[n] = -1;
    sort(sa.begin(), sa.end(), cmp);
    tmpG[sa[0]] = 0;
    for (int i = 1; i < n; i++)
      tmpG[sa[i]] = tmpG[sa[i - 1]] + cmp(sa[i - 1], sa[i]);
    g = tmpG;
  }
}

int main() {
  ios::sync_with_stdio(0); cin.tie(0);
  string s; cin >> s;
  getSA(s);
  vector<int> rank(n), lcp(n);
  for (int i = 0; i < n; i++) rank[sa[i]] = i;
  for (int i = 0, len = 0; i < n; i++) {
    int j = rank[i];
    if(j) {
      while (s[i + len] == s[sa[j - 1] + len]) len++;
      lcp[j] = len;
      if (len) len--;
    }
  }
  long long ans = n - sa[n - 1];
  for (int i = 0; i < n - 1; i++) ans += n - sa[i] - lcp[i + 1];
  cout << ans;
  return 0;
}