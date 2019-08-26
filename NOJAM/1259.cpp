#include <bits/stdc++.h>
using namespace std;

int main() {
  while (1) {
    string s; cin >> s;
    if (s == "0") break;
    int size = s.size();
    bool ok = true;
    for (int i = 0; i < size / 2; i++) ok &= s[i] == s[size - i - 1];
    ok ? cout << "yes\n" : cout << "no\n";
  }
  return 0;
}