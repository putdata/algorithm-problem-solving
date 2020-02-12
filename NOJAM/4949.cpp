#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);
  while (1) {
    string s; getline(cin, s);
    if (s == ".") break;
    int small = 0, big = 0;
    stack<int> stS, stB;
    bool ok = true;
    for (auto it : s) {
      if (it == '(') {
        small++;
        stB.push(big);
      } else if (it == ')') {
        if (--small < 0 || big != stB.top()) {
          ok = false;
          break;
        }
        stB.pop();
      } else if (it == '[') {
        big++;
        stS.push(small);
      } else if (it == ']') {
        if (--big < 0 || small != stS.top()) {
          ok = false;
          break;
        }
        stS.pop();
      }
    }
    cout << (!ok || small || big ? "no\n" : "yes\n");
  }
  return 0;
}