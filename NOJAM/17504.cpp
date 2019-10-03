#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);
  int n; cin >> n;
  unsigned long long a[n];
  for (int i = 0; i < n; i++) cin >> a[i];
  unsigned long long up = 1, down = a[n - 1];
  for (int i = n - 2; i > -1; i--) {
    up = up + a[i] * down;
    swap(up, down);
  }
  unsigned long long gcd = __gcd(up, down);
  cout << (down - up) / gcd << ' ' << down / gcd;
  return 0;
}