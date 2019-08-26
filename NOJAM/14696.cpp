#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
  ll score[] = {0, 1LL, (ll) 1e3, (ll) 1e6, (ll) 1e9};
  int t; cin >> t;
  while (t--) {
    int x, y;
    cin >> x;
    ll pA = 0, pB = 0;
    while (x--) {
      int type; cin >> type;
      pA += score[type];
    }
    cin >> y;
    while (y--) {
      int type; cin >> type;
      pB += score[type];
    }
    if (pA == pB) cout << "D\n";
    else pA > pB ? cout << "A\n" : cout << "B\n";
  }
  return 0;
}