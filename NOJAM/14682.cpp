#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);
  int n, k; cin >> n >> k;
  int ans = n;
  while (k--) {
    n *= 10;
    ans += n;
  }
  cout << ans;
  return 0;
}