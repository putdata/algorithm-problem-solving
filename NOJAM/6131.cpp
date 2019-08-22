#include <bits/stdc++.h>
using namespace std;

int main() {
  int n; cin >> n;
  int ans = 0;
  for (int i = 1; i <= 500; i++) {
    for (int j = i; j <= 500; j++)
      if (j * j == i * i + n) ans++;
  }
  cout << ans;
  return 0;
}