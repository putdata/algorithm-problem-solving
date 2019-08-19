#include <bits/stdc++.h>
using namespace std;

int main() {
  int ans = -1, L = -1e9;
  for (int i = 1; i <= 5; i++) {
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    int sum = a + b + c + d;
    if (sum > L) {
      ans = i;
      L = sum;
    }
  }
  cout << ans << ' ' << L;
  return 0;
}