#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  int a = n / 2, b = n - a;
  cout << (a + 1) * (b + 1);
  return 0;
}