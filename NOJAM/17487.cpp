#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);
  const char left[] = "qwertyasdfgzxcvb";
  string s; getline(cin, s);
  int l = 0, r = 0;
  for (auto it : s) {
    if (it == ' ') l <= r ? l++ : r++;
    else {
      bool capital = false;
      if (it < 'a') {
        it += 32;
        capital = true;
      }
      int i = 0;
      for (; i < 16; i++) {
        if (it == left[i]) {
          l++;
          break;
        }
      }
      if (i == 16) r++;
      if (capital) l <= r ? l++ : r++;
    }
  }
  cout << l << ' ' << r;
  return 0;
}