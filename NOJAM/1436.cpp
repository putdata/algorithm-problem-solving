#include <bits/stdc++.h>
using namespace std;

int main() {
  int n; cin >> n;
  int x = 0;
  while (++x) {
    string s = to_string(x);
    if (s.find("666") != string::npos) n--;
    if (n == 0) break;
  }
  cout << x;
  return 0;
}