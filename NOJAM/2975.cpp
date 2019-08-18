#include <bits/stdc++.h>
using namespace std;

int main() {
  for (;;) {
    int a, c;
    char b;
    cin >> a >> b >> c;
    if (c == 0) break;
    b == 'W' ? a -=c : a += c;
    if (a < -200) cout << "Not allowed\n";
    else cout << a << '\n';
  }
  return 0;
}