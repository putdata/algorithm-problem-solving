#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

tuple<ll, ll, ll> euclid(ll a, ll b) {
  if (b == 0) return {a, 1, 0};
  auto [gcd, x, y] = euclid(b, a % b);
  return {gcd, y, x - (a / b) * y};
}

int main() {
  ios::sync_with_stdio(0); cin.tie(0);
  int t; cin >> t;
  while (t--) {
    ll k, c; cin >> k >> c;
    if (c == 1) {
      k + 1 > 1e9 ? cout << "IMPOSSIBLE\n" : cout << k + 1 << '\n';
      continue;
    }
    auto [gcd, x, y] = euclid(k, c);
    if (gcd != 1) {
      cout << "IMPOSSIBLE\n";
      continue;
    }
    if (y <= 0) y = y + (abs(y) / k + 1) * k;
    y > 1e9 ? cout << "IMPOSSIBLE\n" : cout << y << '\n';
  }
  return 0;
}