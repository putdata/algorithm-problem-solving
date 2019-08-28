#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);
  int n; cin >> n;
  int a[n];
  for (int i = 0; i < n; i++) cin >> a[i];
  int last = -1e9, last2 = -1e9;
  int t1 = 0, t2 = 0;
  for (int i = 0; i < n; i++) {
    if (a[i] > last) {
      t1++;
      last = a[i];
    }
    if (a[n - i - 1] > last2) {
      t2++;
      last2 = a[n - i - 1];
    }
  }
  cout << t1 << '\n' << t2;
  return 0;
}