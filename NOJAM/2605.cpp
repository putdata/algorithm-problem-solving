#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, a[101];
  cin >> n;
  for (int i = 0; i < n; i++) a[i] = i + 1;
  for (int i = 0; i < n; i++) {
    int x;
    cin >> x;
    if (!x) continue;
    for (int j = i; j > i - x; j--) a[j] = a[j - 1];
    a[i - x] = i + 1;
  }
  for (int i = 0; i < n; i++) cout << a[i] << ' ';
  return 0;
}