#include <bits/stdc++.h>
using namespace std;

int main() {
  long long n; cin >> n; n -= 1;
  cout << (3 * n * (n - 1) / 2 + 7 * n + 5) % 45678;
  return 0;
}