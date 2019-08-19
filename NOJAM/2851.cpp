#include <bits/stdc++.h>
using namespace std;

int main() {
  int sum = 0, ans = 1e9;
  for (int i = 0; i < 10; i++) {
    int x; cin >> x;
    sum += x;
    if (abs(sum - 100) <= abs(ans - 100)) ans = sum;
  }
  cout << ans;
  return 0;
}