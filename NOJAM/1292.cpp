#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);
  int a, b; cin >> a >> b;
  int pre[12345] = {};
  int k = 1;
  for (int i = 1; i < 100; i++) {
    for (int j = 1; j <= i; j++, k++) pre[k] = i + pre[k - 1];
  }
  cout << pre[b] - pre[a - 1];
  return 0;
}