#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);
  int n, k; cin >> n >> k;
  vector<int> c(k + 1, 0); c[0] = 1;
  for (int i = 0; i < n; i++) {
    int x; cin >> x;
    for (int j = x; j <= k; j++) c[j] += c[j - x];
  }
  cout << c[k];
  return 0;
}