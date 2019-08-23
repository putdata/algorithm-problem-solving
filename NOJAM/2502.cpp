#include <bits/stdc++.h>
using namespace std;

int main() {
  int a[31] = {0, 1, 0}, b[31] = {0, 0, 1};
  int d, k; cin >> d >> k;
  for (int i = 3; i <= d; i++) {
    a[i] = a[i - 1] + a[i - 2];
    b[i] = b[i - 1] + b[i - 2];
  }
  int B = 0;
  while (++B) {
    int tmp = k - b[d] * B;
    if (tmp % a[d] == 0) {
      if (tmp / a[d] <= B) {
        cout << tmp / a[d] << '\n' << B;
        return 0;
      }
    }
  }
  return 0;
}