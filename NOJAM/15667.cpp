#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  int x = 0;
  while (++x) {
    if (1 + x + (x * x) == n) {
      cout << x;
      break;
    }
  }
  return 0;
}