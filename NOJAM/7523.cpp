#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);
  int t;
  cin >> t;
  for (int i = 1; i <= t; i++) {
    long long a, b;
    cin >> a >> b;
    cout << "Scenario #" << i << ":\n";
    cout << (b * (b + 1)) / 2 - (a * (a - 1)) / 2;
    if (i != t) cout << "\n\n";
  }
  return 0;
}