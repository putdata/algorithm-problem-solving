#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, k;
  cin >> n >> k;
  int maxi = -1e9;
  for (int i = 1; i <= k; i++) {
    int mult = n * i;
    int res = 0;
    while (mult) {
      res *= 10;
      res += mult % 10;
      mult /= 10;
    }
    maxi = max(maxi, res);
  }
  cout << maxi;
  return 0;
}