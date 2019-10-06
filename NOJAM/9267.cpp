#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

tuple<ll, ll, ll> extEuclid(ll a, ll b) {
  if (b == 0) return {a, 1, 0};
  auto [gcd, x, y] = extEuclid(b, a % b);
  return {gcd, y, x - (a / b) * y};
}

int main() {
  ios::sync_with_stdio(0); cin.tie(0);
  ll a, b, s; cin >> a >> b >> s;
  if (!a && !b) cout << (s ? "NO" : "YES");
  else if (!a || !b) cout << (s % max(a, b) ? "NO" : "YES");
  else {
    auto [gcd, x, y] = extEuclid(a, b);
    if (s % gcd != 0) {
      cout << "NO";
      return 0;
    }
    bool ok = false;
    ll mod = b / gcd;
    x = ((x % mod) * ((s / gcd) % mod) % mod + abs(mod)) % mod;
    y = (s - a * x) / b;
    while (y > 0) {
      ok |= get<0>(extEuclid(x, y)) == 1;
      if (ok) break;
      x += b / gcd;
      y -= a / gcd;
    }
    cout << (ok ? "YES" : "NO");
  }
  return 0;
}