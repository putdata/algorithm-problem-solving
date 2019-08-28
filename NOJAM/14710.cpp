#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);
  int t1, t2; cin >> t1 >> t2;
  while (t1 != 360) {
    t1++;
    t2 = (t2 + 12) % 360;
  }
  !t2 ? cout << 'O' : cout << 'X';
  return 0;
}