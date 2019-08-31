#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);
  int n; cin >> n;
  pair<int, int> a[n];
  for (int i = 0; i < n; i++) {
    int x; cin >> x;
    a[i] = {x, i};
  }
  sort(a, a + n);
  int p[n];
  for (int i = 0; i < n; i++) p[a[i].second] = i;
  for (int i = 0; i < n; i++) cout << p[i] << ' ';
  return 0;
}