#include <bits/stdc++.h>
using namespace std;

int main() {
  while (1) {
    int n; cin >> n;
    if (!n) break;
    cout << n << ' ';
    while (n > 9) {
      int tmp = 1;
      while (n) {
        tmp *= n % 10;
        n /= 10;
      }
      n = tmp;
      cout << n << ' ';
    }
    cout << '\n';
  }
  return 0;
}