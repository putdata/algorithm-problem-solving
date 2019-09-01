#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);
  long long n, ans = 0; cin >> n;
  for (long long i = 2; i <= n << 1; i <<= 1) {
    ans += ((n * 2 - i) / (i << 1) + 1) * i;
  }
  cout << ans;
  return 0;
}