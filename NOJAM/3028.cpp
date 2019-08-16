#include <bits/stdc++.h>
using namespace std;

int main() {
  int cup[] = {1, 0, 0};
  string s;
  cin >> s;
  int len = s.size();
  for (int i = 0; i < len; i++) {
    if (s[i] == 'A') swap(cup[0], cup[1]);
    if (s[i] == 'B') swap(cup[1], cup[2]);
    if (s[i] == 'C') swap(cup[0], cup[2]);
  }
  cout << (cup[0] ? 1 : cup[1] ? 2 : 3);
  return 0;
}