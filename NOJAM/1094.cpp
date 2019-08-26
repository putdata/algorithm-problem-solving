#include <bits/stdc++.h>
using namespace std;

int main() {
  int x; cin >> x;
  int ans = 0;
  while (x) {
    int stick = 64;
    while (stick > x) stick /= 2;
    ans++;
    x -= stick;
  }
  cout << ans;
  return 0;
}