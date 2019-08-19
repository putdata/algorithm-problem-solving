#include <bits/stdc++.h>
using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    int x; cin >> x;
    int i = 0;
    for(; i * i <= x; i++);
    cout << i - 1 << '\n';
  }
  return 0;
}