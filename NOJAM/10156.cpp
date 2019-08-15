#include <bits/stdc++.h>
using namespace std;

int main() {
  int k, n, m;
  cin >> k >> n >> m;
  cout << abs(max(0, k * n - m));
  return 0;
}