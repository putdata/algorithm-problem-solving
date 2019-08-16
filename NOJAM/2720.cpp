#include <bits/stdc++.h>
using namespace std;

const int cost[] = {25, 10, 5, 1};
int main() {
  int t;
  cin >> t;
  while (t--) {
    int x;
    cin >> x;
    for (int i = 0; i < 4; i++) {
      cout << x / cost[i] << ' ';
      x -= (x / cost[i]) * cost[i];
    }
    cout << '\n';
  }
  return 0;
}