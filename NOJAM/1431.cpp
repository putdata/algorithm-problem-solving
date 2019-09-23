#include <bits/stdc++.h>
using namespace std;

bool cmp(string a, string b) {
  if (a.size() == b.size()) {
    int aSum = 0, bSum = 0;
    for (auto i : a) if (i - '0' <= 10) aSum += i - '0';
    for (auto i : b) if (i - '0' <= 10) bSum += i - '0';
    if (aSum != bSum) return aSum < bSum;
    return a < b;
  }
  return a.size() < b.size();
}

int main() {
  ios::sync_with_stdio(0); cin.tie(0);
  int n; cin >> n;
  string s[n];
  for (int i = 0; i < n; i++) cin >> s[i];
  sort(s, s + n, cmp);
  for(auto i : s) cout << i << '\n';
  return 0;
}