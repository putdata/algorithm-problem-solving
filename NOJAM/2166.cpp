#include <bits/stdc++.h>
using namespace std;

#define X first
#define Y second

int main() {
  ios::sync_with_stdio(0); cin.tie(0);
  int n; cin >> n;
  pair<long long, long long> p[n];
  for (int i = 0; i < n; i++) {
    long long a, b; cin >> a >> b;
    p[i] = {a, b};
  }
  long long ans = 0;
  for (int i = 0, j = n - 1; i < n; j = i++)
    ans += (p[j].X + p[i].X) * (p[j].Y - p[i].Y);
  ans = abs(ans);
  cout << ans / 2 << '.' << (ans % 2 ? '5' : '0');
  return 0;
}