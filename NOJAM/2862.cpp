#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);
  ll n; cin >> n;
  ll fibo[100] = {0, 1, 1, 2}, last;
  for (int i = 3; i <= 75; i++) {
    fibo[i] = fibo[i - 1] + fibo[i - 2];
    if (n == fibo[i]) {
      cout << n;
      return 0;
    } else if (n < fibo[i]) {
      last = i - 1;
      break;
    }
  }
  for (int i = last; i > 0; i--) {
    if (n - fibo[i] >= 0) {
      n -= fibo[i];
      if (n == 0) {
        cout << fibo[i];
        return 0;
      }
    }
  }
  cout << n;
  return 0;
}