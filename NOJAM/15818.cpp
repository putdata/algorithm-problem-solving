#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
  ll n, m, mult = 1;
  cin >> n >> m;
  while (n--) {
    ll x; cin >> x;
    mult = (mult * x) % m;
  }
  cout << mult;
  return 0;
}