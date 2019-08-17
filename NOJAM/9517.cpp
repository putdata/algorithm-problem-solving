#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);
  int k, n, total = 0;
  cin >> k >> n;
  for (int i = 0; i < n; i++) {
    int time;
    char ans;
    cin >> time >> ans;
    total += time;
    if (total >= 210) break;
    if (ans == 'T') k == 8 ? k = 1 : ++k;
  }
  cout << k;
  return 0;
}