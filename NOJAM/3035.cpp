#include <bits/stdc++.h>
using namespace std;

int main() {
  int r, c, zr, zc;
  cin >> r >> c >> zr >> zc;
  string s;
  for (int i = 0; i < r; i++) {
    cin >> s;
    string tmp = "";
    for (int j = 0; j < c; j++)
      for (int k = 0; k < zc; k++) tmp += s[j];
    for (int j = 0; j < zr; j++) cout << tmp << '\n';
  }
  return 0;
}