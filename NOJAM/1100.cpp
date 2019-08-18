#include <bits/stdc++.h>
using namespace std;

int main() {
  int ans = 0;
  for (int i = 0; i < 8; i++) {
    for (int j = 0; j < 8; j++) {
      char c;
      cin >> c;
      if (c == 'F' && (i + j) % 2 == 0) ans++;
    }
  }
  cout << ans;
  return 0;
}