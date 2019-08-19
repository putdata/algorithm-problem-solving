#include <bits/stdc++.h>
using namespace std;

int main() {
  int v; cin >> v;
  string s; cin >> s;
  int a = 0, b = 0;
  for (int i = 0; i < v; i++) {
    s[i] == 'A' ? ++a : ++b;
  }
  if (a == b) cout << "Tie";
  else a > b ? cout << 'A' : cout << 'B';
  return 0;
}