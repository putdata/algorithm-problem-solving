#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

ll foo(ll x) {
  if (x <= 2) return 2;
  return (x / 2) * (x / 2 + 1);
}
int main() {
  ll a, b;
  cin >> a >> b;
  cout << foo(b) - foo(a - 1);
  return 0;
}