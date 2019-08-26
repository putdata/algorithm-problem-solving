#include <bits/stdc++.h>
using namespace std;

int main() {
  int n; cin >> n;
  long long cur = 0, sum = 0;
  for (int i = 0; i < n; i++) {
    char x; cin >> x;
    if (x - '0' < 10) {
      cur *= 10;
      cur += x - '0';
    } else {
      sum += cur;
      cur = 0;
    }
  }
  sum += cur;
  cout << sum;
  return 0;
}