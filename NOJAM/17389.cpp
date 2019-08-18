#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, b = 0, ans = 0;
  cin >> n;
  for (int i = 1; i <= n; i++) {
    char c;
    cin >> c;
    if (c == 'X') b = 0;
    else ans += i + b++;
  }
  cout << ans;
  return 0;
}