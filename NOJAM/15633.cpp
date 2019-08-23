#include <bits/stdc++.h>
using namespace std;

int main() {
  int n; cin >> n;
  int sum = 0;
  for (int i = 1; i * i <= n; i++) {
    if (n % i == 0) {
      i * i == n ? sum += i : sum += i + (n / i);
    }
  }
  cout << sum * 5 - 24;
  return 0;
}