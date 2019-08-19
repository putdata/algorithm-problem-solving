#include <bits/stdc++.h>
using namespace std;

int main() {
  string s;
  cin >> s;
  int size = s.size();
  for (int i = 0; i < size; i++) {
    s[i] = (s[i] - 'A' + 23) % 26 + 'A';
  }
  cout << s;
  return 0;
}