#include <bits/stdc++.h>
using namespace std;

int main() {
  int n; cin >> n;
  bool chk[800] = {};
  while (n != 1) {
    int tmp = 0;
    while (n) {
      tmp += (n % 10) * (n % 10);
      n /= 10;
    }
    n = tmp;
    if (chk[n]) {
      cout << "UNHAPPY";
      return 0;
    }
    chk[n] = 1;
  }
  cout << "HAPPY";
  return 0;
}