#include <bits/stdc++.h>
using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    int a, b;
    cin >> a >> b;
    cout << (a / b + (a % b == 0 ? 0 : 1)) << '\n';
  }
  return 0;
}