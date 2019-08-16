#include <bits/stdc++.h>
using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    int s, n;
    cin >> s >> n;
    for (int i = 0; i < n; i++) {
      int a, b;
      cin >> a >> b;
      s += a * b;
    }
    cout << s << '\n';
  }
  return 0;
}