#include <bits/stdc++.h>
using namespace std;

int main() {
  long long fibo[90] = {0, 1, 1};
  int n; cin >> n;
  for (int i = 3; i <= n + 1; i++) fibo[i] = fibo[i - 1] + fibo[i - 2];
  cout << fibo[n] * 2 + fibo[n + 1] * 2;
  return 0;
}