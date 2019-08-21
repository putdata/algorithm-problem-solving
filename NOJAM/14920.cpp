#include <bits/stdc++.h>
using namespace std;

int main() {
  long long n, ans = 1;
  cin >> n;
  while (n != 1) {
    ans++;
    n % 2 ? n = 3 * n + 1 : n /= 2;
  }
  cout << ans;
  return 0;
}