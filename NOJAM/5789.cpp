#include <bits/stdc++.h>
using namespace std;

int main() {
  int t; cin >> t;
  while (t--) {
    string s; cin >> s;
    int size = s.size();
    s[size / 2 - 1] == s[size / 2] ? cout << "Do-it\n" : cout << "Do-it-Not\n";
  }
  return 0;
}