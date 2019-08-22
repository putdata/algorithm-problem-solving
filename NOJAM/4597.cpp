#include <bits/stdc++.h>
using namespace std;

int main() {
  while (1) {
    string s; cin >> s;
    if (s == "#") break;
    int size = s.size();
    int cnt = 0;
    for (int i = 0; i < size - 1; i++) cnt += s[i] == '1';
    if (s[size - 1] == 'e') s[size - 1] = cnt % 2 ? '1' : '0';
    else s[size - 1] = cnt % 2 ? '0' : '1';
    cout << s << '\n';
  }
  return 0;
}