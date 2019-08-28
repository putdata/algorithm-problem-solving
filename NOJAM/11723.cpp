#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);
  set<int> sat;
  int m; cin >> m;
  while (m--) {
    string s; cin >> s;
    int x;
    if (s == "add") {
      cin >> x;
      sat.insert(x);
    } else if (s == "remove") {
      cin >> x;
      sat.erase(x);
    } else if (s == "check") {
      cin >> x;
      sat.find(x) != sat.end() ? cout << "1\n" : cout << "0\n";
    } else if (s == "toggle") {
      cin >> x;
      if(sat.find(x) == sat.end()) sat.insert(x);
      else sat.erase(x);
    } else if (s == "all") {
      for (int i = 1; i <= 20; i++) sat.insert(i);
    } else sat.clear();
  }
  return 0;
}