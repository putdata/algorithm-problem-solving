#include <bits/stdc++.h>
using namespace std;

int main() {
  string s;
  int n;
  cin >> s >> n;
  int slen = s.size(), cnt = 0;
  while (n--) {
    string x; cin >> x;
    int xlen = x.size();
    for (int i = 0; i < slen; i++) x.push_back(x[i]);
    for (int i = 0; i < xlen; i++) {
      bool ok = true;
      for (int j = 0; j < slen; j++) ok &= x[i + j] == s[j];
      if (ok) {
        cnt++;
        break;
      }
    }
  }
  cout << cnt;
  return 0;
}