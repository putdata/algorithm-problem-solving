#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);
  ll n; cin >> n;
  ll tmp = n;
  vector<ll> vec;
  for (ll i = 2; i * i <= n; i++) {
    if (tmp % i == 0) vec.push_back(i);
    while (tmp % i == 0) tmp /= i;
  }
  if (tmp > 1) vec.push_back(tmp);
  ll pi = n;
  for (auto it : vec) pi = pi / it * (it - 1);
  cout << pi;
  return 0;
}