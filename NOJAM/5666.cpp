#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);
  double a, b;
  cout.precision(2);
  while (cin >> a >> b) {
    cout << fixed << a / b << '\n';
  }
  return 0;
}