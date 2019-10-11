#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);
  int n, k; cin >> n >> k;
  int num[1000] = {k};
  int up = 0, idx = 0;
  while (1) {
    int tmp = num[idx++] * n + up;
    num[idx] = tmp % 10;
    up = tmp / 10;
    if (num[idx] == k && up == 0) break;
  }
  if (num[idx - 1] == 0) cout << 0;
  else for (int i = idx - 1; i > -1; i--) cout << num[i];
  return 0;
}