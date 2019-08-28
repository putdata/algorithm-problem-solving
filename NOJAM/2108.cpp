#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);
  int n; cin >> n;
  int a[n];
  for (int i = 0; i < n; i++) cin >> a[i];
  sort(a, a + n);
  int sum = a[0], cur = 1, cnt = 1, many = a[0];
  bool sec = false;
  for (int i = 1; i < n; i++) {
    sum += a[i];
    if (a[i] == a[i - 1]) cur++;
    else cur = 1;
    if (cur > cnt) {
      cnt = cur;
      many = a[i];
      sec = false;
    } else if (cur == cnt && !sec) {
      many = a[i];
      sec = true;
    }
  }
  cout << int(round(double(sum) / n)) << '\n' << a[n / 2] << '\n' << many << '\n' << a[n - 1] - a[0];
  return 0;
}