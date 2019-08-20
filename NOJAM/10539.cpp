#include <bits/stdc++.h>
using namespace std;

int main() {
  int n; cin >> n;
  long long b[n];
  for (int i = 0; i < n; i++) {
    cin >> b[i];
    b[i] *= (i + 1);
  }
  cout << b[0] << ' ';
  for (int i = 1; i < n; i++) cout << b[i] - b[i - 1] << ' ';
  return 0;
}