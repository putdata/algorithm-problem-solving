#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);
  int t; cin >> t;
  while (t--) {
    int n; cin >> n;
    long long a[6];
    for (int i = 0; i < 6; i++) cin >> a[i];
    int cnt = 1;
    while (1) {
      long long sum = 0;
      for (int i = 0; i < 6; i++) sum += a[i];
      if (sum > n) {
        cout << cnt << '\n';
        break;
      }
      long long tmp[6];
      for (int i = 0; i < 6; i++)
        tmp[i] = a[i] + a[(i + 5) % 6] + a[(i + 1) % 6] + a[(i + 3) % 6];
      for (int i = 0; i < 6; i++) a[i] = tmp[i];
      cnt++;
    }
  }
  return 0;
}