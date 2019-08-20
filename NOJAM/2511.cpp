#include <bits/stdc++.h>
using namespace std;

int main() {
  int a[10], p1 = 0, p2 = 0, lw = 0;
  for (int i = 0; i < 10; i++) cin >> a[i];
  for (int i = 0; i < 10; i++) {
    int x;
    cin >> x;
    if (x == a[i]) {
      p1++, p2++;
      continue;
    }
    if (a[i] > x) {
      lw = 0;
      p1 += 3;
    } else {
      lw = 1;
      p2 += 3;
    }
  }
  cout << p1 << ' ' << p2;
  if (p1 == p2) {
    if (p1 == 10 && p2 == 10) cout << "\nD";
    else lw == 0 ? cout << "\nA" : cout << "\nB";
  } else p1 > p2 ? cout << "\nA" : cout << "\nB";
  return 0;
}