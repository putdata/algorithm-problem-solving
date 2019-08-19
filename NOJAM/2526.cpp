#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, p, a[12345] = {};
  cin >> n >> p;
  int x = n, i = 1;
  while (!a[x]) {
    a[x] = i++;
    x = (x * n) % p;
  }
  cout << i - a[x];
  return 0;
}