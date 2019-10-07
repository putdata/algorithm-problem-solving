#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);
  ll n, w; cin >> n >> w;
  ll a[n], coin = 0;
  for (int i = 0; i < n; i++) cin >> a[i];
  for (int i = 0; i < n - 1; i++) {
    if (a[i] < a[i + 1]) {
      coin += w / a[i];
      w %= a[i];
    } else if (a[i] > a[i + 1] && coin) {
      w += coin * a[i];
      coin = 0;
    }
  }
  if (coin) w += coin * a[n - 1];
  cout << w;
  return 0;
}