#include <bits/stdc++.h>
using namespace std;

bool chk[4];
void foo(char x) {
  if (x == 'U') chk[0] = 1;
  if (chk[0] && x == 'C') chk[1] = 1;
  if (chk[1] && x == 'P') chk[2] = 1;
  if (chk[2] && x == 'C') chk[3] = 1;
}

int main() {
  string s; getline(cin, s);
  int size = s.size();
  for (int i = 0; i < size; i++) {
    if (s[i] == ' ') continue;
    foo(s[i]);
  }
  chk[3] ? cout << "I love UCPC" : cout << "I hate UCPC";
  return 0;
}