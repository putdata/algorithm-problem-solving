#include <bits/stdc++.h>
using namespace std;

int main() {
  string s; cin >> s;
  int size = s.size();
  bool ok = true;
  for (int i = 0; i < size; i++) ok &= s[i] == s[size - i - 1];
  ok ? cout << 1 : cout << 0;
  return 0;
}