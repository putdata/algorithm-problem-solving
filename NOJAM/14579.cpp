#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);
  int a, b; cin >> a >> b;
  int sum = 1;
  for (int i = a; i <= b; i++) {
    sum *= i * (i + 1) / 2;
    sum %= 14579;
  }
  cout << sum;
  return 0;
}