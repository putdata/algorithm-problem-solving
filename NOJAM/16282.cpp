#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);
  long long n, i = 1, pow = 2; cin >> n;
  for (;; i++, pow *= 2) {
    if (i * pow - 1 >= n) {
      cout << i - 1;
      break;
    }
  }
  return 0;
}