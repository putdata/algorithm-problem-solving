#include <bits/stdc++.h>
using namespace std;

int main() {
  int t; cin >> t;
  cin.ignore();
  while (t--) {
    string s; getline(cin, s);
    int size = s.size();
    int lastPos = 0;
    for (int i = 0; i < size; i++) {
      if (s[i] == ' ') {
        reverse(s.begin() + lastPos, s.begin() + i);
        lastPos = i + 1;
      }
    }
    reverse(s.begin() + lastPos, s.end());
    cout << s << '\n';
  }
  return 0;
}