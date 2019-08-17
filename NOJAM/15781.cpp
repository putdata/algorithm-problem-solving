#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, m;
  cin >> n >> m;
  int a = 0, b = 0;
  while (n--) {
    int x;
    cin >> x;
    a = max(a, x);
  }
  while (m--) {
    int x;
    cin >> x;
    b = max(b, x);
  }
  cout << a + b;
  return 0;
}