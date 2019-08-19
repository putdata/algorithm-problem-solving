#include <bits/stdc++.h>
using namespace std;

int main() {
  int n; cin >> n;
  cin.ignore();
  while (n--) {
    string s;
    getline(cin, s);
    s[0] = toupper(s[0]);
    cout << s << '\n';
  }
  return 0;
}