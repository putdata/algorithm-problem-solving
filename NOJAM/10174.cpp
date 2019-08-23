#include <bits/stdc++.h>
using namespace std;

int main() {
  int t; cin >> t;
  cin.ignore();
  while (t--) {
    string s; getline(cin, s);
    transform(s.begin(), s.end(), s.begin(), ::tolower);
    int size = s.size();
    bool ok = true;
    for (int i = 0; i < size / 2; i++)
      ok &= s[i] == s[size - i - 1];
    ok ? cout << "Yes\n" : cout << "No\n";
  }
  return 0;
}