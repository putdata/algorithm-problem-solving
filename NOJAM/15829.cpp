#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);
  int l;
  string s;
  cin >> l >> s;
  long long hash = 0, r = 1, MOD = 1234567891;
  for (int i = 0; i < l; i++) {
    hash = (hash + (s[i] - 'a' + 1) * r % MOD) % MOD;
    r = (r * 31) % MOD;
  }
  cout << hash;
  return 0;
}