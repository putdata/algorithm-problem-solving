#include <bits/stdc++.h>
using namespace std;

int main() {
  int n; cin >> n;
  int maxi = -1e9, ans;
  for (int i = 1; i <= n; i++) {
    int a[5], last = -1e9;
    for (int j = 0; j < 5; j++) cin >> a[j];
    for (int j = 0; j < 5; j++) {
      for (int k = j + 1; k < 5; k++)
        for (int l = k + 1; l < 5; l++)
          last = max(last, (a[j] + a[k] + a[l]) % 10);
    }
    if (maxi <= last) {
      maxi = last;
      ans = i;
    }
  }
  cout << ans;
  return 0;
}