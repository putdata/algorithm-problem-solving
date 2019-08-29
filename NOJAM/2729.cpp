#include <bits/stdc++.h>
using namespace std;

int main() {
  int t; cin >> t;
  while (t--) {
    string a, b; cin >> a >> b;
    int alen = a.size(), blen = b.size();
    if (alen < blen) {
      swap(a, b);
      swap(alen, blen);
    }
    reverse(a.begin(), a.end());
    reverse(b.begin(), b.end());
    int i = 0, carry = 0;
    int add[90] = {};
    for (; i < alen; i++) {
      int tmp = a[i] + carry - '0';
      if (i < blen) tmp += b[i] - '0';
      if (tmp < 2) {
        add[i] = tmp;
        carry = 0;
      } else {
        add[i] = tmp - 2;
        carry = 1;
      }
    }
    if (carry) add[i] = 1;
    for (; add[i] == 0 && i > 0; i--);
    for (; i > -1; i--) cout << add[i];
    cout << '\n';
  }
  return 0;
}