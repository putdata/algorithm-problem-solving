#include <bits/stdc++.h>
using namespace std;

typedef unsigned long long ll;
const int MOD = 1e9 + 7;

ll foo(ll x) {
  if (x == 0) return 1;
  if (x == 1) return 2;
  ll tmp = foo(x / 2);
  if (x % 2) return (((tmp * tmp) % MOD) * 2) % MOD;
  else return (tmp * tmp) % MOD;
}

int main() {
  ios::sync_with_stdio(0); cin.tie(0);
  int n; cin >> n;
  ll calc = 0;
  while (n--) {
    ll x, y; cin >> x >> y;
    if (y == 0) continue;
    calc += (((x * y) % MOD) * foo(y - 1)) % MOD;
    calc %= MOD;
  }
  cout << calc;
  return 0;
}