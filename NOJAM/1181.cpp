#include <bits/stdc++.h>
using namespace std;

bool cmp(const string &a, const string &b) {
  if (a.size() == b.size()) return a.compare(b) < 0;
  return a.size() < b.size();
}

int main() {
  ios::sync_with_stdio(0); cin.tie(0);
  int n; cin >> n;
  string s[n];
  for (int i = 0; i < n; i++) cin >> s[i];
  sort(s, s + n, cmp);
  int size = unique(s, s + n) - s;
  for (int i = 0; i < size; i++) cout << s[i] << '\n';
  return 0;
}