#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);
  const int mod = 987654321;
  int n; cin >> n;
  long long cat[10000] = {1, 1, 2, 5, 14};
  for (int i = 5; i <= n / 2; i++) {
    for (int j = 0; j < i; j++) cat[i] = (cat[i] + (cat[j] * cat[i - j - 1]) % mod) % mod;
  }
  cout << cat[n / 2];
  return 0;
}