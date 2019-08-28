#include <bits/stdc++.h>
using namespace std;

typedef unsigned long long ull;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);
  ull n; cin >> n;
  ull t = sqrt(n);
  t * t >= n ? cout << t : cout << t + 1;
  return 0;
}