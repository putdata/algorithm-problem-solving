#include <bits/stdc++.h>
using namespace std;

int main() {
  for (int n = 1000; n <= 9999; n++) {
    int a, b, c; a = b = c = n;
    int i, j, k; i = j = k = 0;
    while (a) {
      i += a % 10;
      a /= 10;
    }
    while (b) {
      j += b % 12;
      b /= 12;
    }
    while (c) {
      k += c % 16;
      c /= 16;
    }
    if (i == j && j == k) cout << n << '\n';
  }
  return 0;
}