#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll MOD = 1e9 + 7;

tuple<ll, ll, ll> euclid(ll a, ll b) {
  if (b == 0) return {a, 1, 0};
  auto [gcd, x, y] = euclid(b, a % b);
  return {gcd, y, x - (a / b) * y};
}

int main() {
  ios::sync_with_stdio(0); cin.tie(0);
  ll n, k; cin >> n >> k;
  ll F[2 * n + 1], K[n], S[n + 1];
  F[0] = K[0] = S[0] = 1;
  for (ll i = 1; i <= 2 * n; i++) F[i] = F[i - 1] * i % MOD;
  for (ll i = 1; i <= n / 2; i++) K[i] = K[i - 1] * k % MOD;
  for (int i = 1; i <= n; i++) {
    if (k == 1) S[i] = 2 * S[i - 1] % MOD;
    else S[i] = S[i - 1] * (k + 1) % MOD;
    if (i & 1) {
      ll C = (F[(i / 2) * 2] * get<1>(euclid(F[i / 2] * F[i / 2 + 1] % MOD, MOD)) % MOD + MOD) % MOD;
      S[i] = (S[i] - (K[i / 2] * C) % MOD + MOD) % MOD;
    }
  }
  cout << S[n];
  return 0;
}