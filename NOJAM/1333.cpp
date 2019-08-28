#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);
  bool lis[1234567] = {};
  int n, l, d; cin >> n >> l >> d;
  int cur = 0;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < l; j++) lis[cur++] = 1;
    cur += 5;
  }
  for (int i = 0; i < 1234567; i += d) {
    if (lis[i] == 0) {
      cout << i;
      break;
    }
  }
  return 0;
}