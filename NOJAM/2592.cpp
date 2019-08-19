#include <bits/stdc++.h>
using namespace std;

int main() {
  int a[1234] = {}, sum = 0, maxi = -1e9, ans = -1;
  for (int i = 0; i < 10; i++) {
    int x;
    cin >> x;
    sum += x;
    if (++a[x] > maxi) {
      maxi = a[x];
      ans = x;
    }
  }
  cout << sum / 10 << '\n' << ans;
  return 0;
}