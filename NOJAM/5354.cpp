#include <bits/stdc++.h>
using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
      for (int j = 0; j < n; j++) {
        if (i == 0 || i == n - 1) cout << '#';
        else if (j == 0 || j == n - 1) cout << '#';
        else cout << 'J';
      }
      cout << '\n';
    }
    cout << '\n';
  }
  return 0;
}