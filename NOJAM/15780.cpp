#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, k, can = 0;
  cin >> n >> k;
  while (k--) {
    int x;
    cin >> x;
    can += (x - 1) / 2 + 1;
  }
  can >= n ? cout << "YES" : cout << "NO";
  return 0;
}