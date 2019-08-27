#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);
  int n; cin >> n;
  while (n--) {
    string s; cin >> s;
    reverse(s.begin(), s.end());
    int deci = 0;
    for (int i = 0; i < 24; i++) {
      if (s[i] == '1') deci += 1 << i;
    }
    cout << deci << '\n';
  }
  return 0;
}