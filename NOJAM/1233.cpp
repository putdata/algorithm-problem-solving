#include <bits/stdc++.h>
using namespace std;

int main() {
  int a, b, c;
  cin >> a >> b >> c;
  int cnt[90] = {};
  for (int i = 1; i <= a; i++)
    for (int j = 1; j <= b; j++)
      for (int k = 1; k <= c; k++)
        cnt[i + j + k]++;
  int maxi = -1e9, idx;
  for (int i = 3; i <= a + b + c; i++) {
    if (maxi < cnt[i]) {
      maxi = cnt[i];
      idx = i;
    }
  }
  cout << idx;
  return 0;
}