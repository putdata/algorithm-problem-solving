#include <bits/stdc++.h>
using namespace std;

int main() {
  int t; cin >> t;
  while (t--) {
    string s; cin >> s;
    int sum = 0;
    for (int i = 15; i > -1; i--) {
      if (i % 2) sum += s[i] - '0';
      else {
        int tmp = (s[i] - '0') * 2;
        sum += tmp / 10 + tmp % 10;
      }
    }
    sum % 10 ? cout << "F\n" : cout << "T\n";
  }
  return 0;
}