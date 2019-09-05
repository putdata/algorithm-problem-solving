#include <bits/stdc++.h>
using namespace std;

int n, w[25];
int foo(int cur, int use) {
  if (cur == n) return use == (1 << 26) - 1 ? 1 : 0;
  return foo(cur + 1, use | w[cur]) + foo(cur + 1, use);
}
int main() {
  ios::sync_with_stdio(0); cin.tie(0);
  cin >> n;
  for (int i = 0; i < n; i++) {
    string s; cin >> s;
    for (int j = 0; j < s.size(); j++) w[i] |= 1 << (s[j] - 'a');
  }
  cout << foo(0, 0);
  return 0;
}