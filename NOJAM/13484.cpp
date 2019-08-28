#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);
  int x, n; cin >> x >> n;
  x *= (n + 1);
  while (n--) {
    int use; cin >> use;
    x -= use;
  }
  cout << x;
  return 0;
}