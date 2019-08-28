#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);
  while (1) {
    int n; cin >> n;
    if (!n) break;
    for (int i = 1; i <= n; i++) {
      for (int j = 0; j < i; j++)
        cout << '*';
      cout << '\n';
    }
  }
  return 0;
}