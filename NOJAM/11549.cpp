#include <bits/stdc++.h>
using namespace std;

int main() {
  int t, ans = 0;
  cin >> t;
  for (int i = 0; i < 5; i++) {
    int x;
    cin >> x;
    if (x == t) ans++;
  }
  cout << ans;
  return 0;
}