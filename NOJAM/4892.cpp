#include <bits/stdc++.h>
using namespace std;

int main() {
  int i = 0;
  while (++i) {
    int n0;
    cin >> n0;
    if (n0 == 0) break;
    cout << i << ". ";
    (n0 * 3) % 2 ? cout << "odd " : cout << "even ";
    int n2 = (3 * n0 + 1) / 2, n3 = n2 * 3, n4 = n3 / 9;
    cout << n4 << '\n';
  }
  return 0;
}