#include <bits/stdc++.h>
using namespace std;

int main() {
  set<string> sat;
  int n; cin >> n;
  while (n--) {
    string s; cin >> s;
    if (sat.find(s) != sat.end()) {
      cout << s.size() << ' ' << s[s.size() / 2];
      break;
    }
    sat.insert(s);
    reverse(s.begin(), s.end());
    if (sat.find(s) != sat.end()) {
      cout << s.size() << ' ' << s[s.size() / 2];
      break;
    }
    sat.insert(s);
  }
  return 0;
}