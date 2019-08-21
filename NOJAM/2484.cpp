#include <bits/stdc++.h>
using namespace std;

int main() {
  int n; cin >> n;
  int maxi = -1e9;
  while (n--) {
    int cost;
    int a[4]; cin >> a[0] >> a[1] >> a[2] >> a[3];
    sort(a, a + 4);
    if (a[0] == a[1] && a[1] == a[2] && a[2] == a[3]) cost = 50000 + a[0] * 5000;
    else if ((a[0] == a[1] && a[1] == a[2]) || (a[1] == a[2] && a[2] == a[3])) cost = 10000 + a[1] * 1000;
    else if (a[0] == a[1] && a[2] == a[3]) cost = 2000 + a[1] * 500 + a[2] * 500;
    else if (a[0] == a[1]) cost = 1000 + a[0] * 100;
    else if (a[1] == a[2]) cost = 1000 + a[1] * 100;
    else if (a[2] == a[3]) cost = 1000 + a[2] * 100;
    else cost = a[3] * 100;
    maxi = max(maxi, cost);
  }
  cout << maxi;
  return 0;
}