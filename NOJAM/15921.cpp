#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);
  int n, sum = 0; cin >> n;
  for (int i = 0; i < n; i++) {
    int x; cin >> x;
    sum += x;
  }
  cout << (sum ? "1.00" : "divide by zero");
  return 0;
}