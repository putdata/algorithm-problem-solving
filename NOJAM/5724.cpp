#include <bits/stdc++.h>
using namespace std;

int main() {
  int ans[101] = {0, 1};
  for (int i = 0; i <= 100; i++) ans[i] = i * i + ans[i - 1];
  while (1) {
    int x;
    cin >> x;
    if (x == 0) break;
    cout << ans[x] << '\n';
  }
  return 0;
}