#include <bits/stdc++.h>
using namespace std;

int main() {
  int n; cin >> n;
  int i = 1, time = 0;
  while (n) {
    time++;
    if (i > n) i = 1;
    n -= i++;
  }
  cout << time;
  return 0;
}