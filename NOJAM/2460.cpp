#include <bits/stdc++.h>
using namespace std;

int main() {
  int now = 0, maxi = -1e9;
  for (int i = 0; i < 10; i++) {
    int a, b; cin >> a >> b;
    now += b - a;
    maxi = max(maxi, now);
  }
  cout << maxi;
  return 0;
}