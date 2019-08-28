#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);
  int t; cin >> t;
  cin.ignore();
  while (t--) {
    string s; getline(cin, s);
    int size = s.size();
    transform(s.begin(), s.end(), s.begin(), ::tolower);
    int a[26] = {};
    for (int i = 0; i < size; i++) {
      if ('a' <= s[i] && s[i] <= 'z') a[s[i] - 'a']++;
    }
    bool ok = true;
    for (int i = 0; i < 26; i++) {
      if (a[i] == 0) {
        if (ok) cout << "missing ";
        cout << char(i + 'a');
        ok = false;
      }
    }
    if (ok) cout << "pangram";
    cout << '\n';
  }
  return 0;
}