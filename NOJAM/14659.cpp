#include <bits/stdc++.h>
using namespace std;

int main() {
  int n; cin >> n;
  int a[n];
  for (int i = 0; i < n; i++) cin >> a[i];
  int l = 0, maxi = -1e9;
  while (l < n) {
    int r = l;
    while (a[l] > a[r + 1] && r < n - 1) r++;
    maxi = max(maxi, r - l);
    l = r + 1;
  }
  cout << maxi;
  return 0;
}