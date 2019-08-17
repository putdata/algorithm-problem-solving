#include <bits/stdc++.h>
using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    int p1 = 0, p2 = 0;
    while (n--) {
      char a, b;
      cin >> a >> b;
      if (a == b) continue;
      if (a == 'R') b == 'S' ? p1++ : p2++;
      if (a == 'S') b == 'P' ? p1++ : p2++;
      if (a == 'P') b == 'R' ? p1++ : p2++;
    }
    if (p1 == p2) cout << "TIE\n";
    else p1 > p2 ? cout << "Player 1\n" : cout << "Player 2\n";
  }
  return 0;
}