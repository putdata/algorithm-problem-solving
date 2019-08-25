#include <bits/stdc++.h>
using namespace std;

int main() {
  int n; cin >> n;
  int cnt = 1;
  while (1) {
    int power = (int) pow(10, cnt);
    if (n > power) n = (n + power / 10 * 5) / power * power;
    else break;
    cnt++;
  }
  cout << n;
  return 0;
}