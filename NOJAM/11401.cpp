#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int MOD = 1e9 + 7;

tuple<ll, ll, ll> extEuclid(ll a, ll b) {
  if (b == 0) return {a, 1, 0};
  auto [gcd, x, y] = extEuclid(b, a % b);
  return {gcd, y, x - (a / b) * y};
}

int main() {
  ios::sync_with_stdio(0); cin.tie(0);
  ll n, k; cin >> n >> k;
  ll A = 1, B = 1;
  for (ll i = 2; i <= n; i++) A = (A * i) % MOD;
  for (ll i = 1; i <= k; i++) B = (B * i) % MOD;
  for (ll i = 1; i <= n - k; i++) B = (B * i) % MOD;
  cout << (A * ((get<1>(extEuclid(B, MOD)) + MOD) % MOD)) % MOD;
  return 0;
}