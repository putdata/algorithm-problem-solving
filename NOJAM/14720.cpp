#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  int cur = 0, ans = 0;
  while (n--) {
    int x;
    cin >> x;
    if (x == cur) {
      cur = (cur + 1) % 3;
      ans++;
    }
  }
  cout << ans;
  return 0;
}