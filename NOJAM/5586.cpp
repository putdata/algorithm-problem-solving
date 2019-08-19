#include <bits/stdc++.h>
using namespace std;

int main() {
  int joi = 0, ioi = 0;
  string s;
  cin >> s;
  int size = s.size();
  for (int i = 0; i < size - 2; i++) {
    joi += s[i] == 'J' && s[i + 1] == 'O' && s[i + 2] == 'I';
    ioi += s[i] == 'I' && s[i + 1] == 'O' && s[i + 2] == 'I';
  }
  cout << joi << '\n' << ioi;
  return 0;
}