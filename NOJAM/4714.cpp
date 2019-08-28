#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);
  cout.precision(2);
  while (1) {
    double x; cin >> x;
    if (x == -1.0) break;
    cout << fixed << "Objects weighing " << x << " on Earth will weigh " << x * 0.167 << " on the moon.\n";
  }
  return 0;
}