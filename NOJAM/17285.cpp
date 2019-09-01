#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);
  string s; getline(cin ,s);
  int key = s[0] ^ 'C';
  for (auto it : s) cout << char(it ^ key);
  return 0;
}