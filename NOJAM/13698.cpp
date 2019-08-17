#include <bits/stdc++.h>
using namespace std;

int main() {
  int a[4] = {1, 0, 0, 2};
  string s;
  cin >> s;
  int size = s.size();
  for (int i = 0; i < size; i++) {
    if (s[i] == 'A') swap(a[0], a[1]);
    if (s[i] == 'B') swap(a[0], a[2]);
    if (s[i] == 'C') swap(a[0], a[3]);
    if (s[i] == 'D') swap(a[1], a[2]);
    if (s[i] == 'E') swap(a[1], a[3]);
    if (s[i] == 'F') swap(a[2], a[3]);
  }
  for (int i = 0; i < 4; i++)
    if (a[i] == 1) cout << i + 1 << '\n';
  for (int i = 0; i < 4; i++)
    if (a[i] == 2) cout << i + 1;
  return 0;
}