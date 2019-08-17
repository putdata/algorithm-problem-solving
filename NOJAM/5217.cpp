#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);
  int n;
  cin >> n;
  while (n--) {
    int x;
    cin >> x;
    cout << "Pairs for " << x << ": ";
    for (int i = 1; i <= (x + 1) / 2 - 1; i++) {
      if (i > 1) cout << ", ";
      cout << i << ' ' << x - i;
    }
    cout << '\n';
  }
  return 0;
}