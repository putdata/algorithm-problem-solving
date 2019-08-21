#include <bits/stdc++.h>
using namespace std;

int main() {
  string s;
  cin >> s;
  if (s == "0") cout << 0;
  else {
    int ans = 1;
    int size = s.size();
    ans += (size - 1) / 2;
    bool ok = false;
    for (int i = 1; i < size; i++) {
      ok |= s[i] == '1';
    }
    if ((size - 1) % 2 == 0 && ok == false) ans -= 1;
    cout << ans;
  }
  return 0;
}