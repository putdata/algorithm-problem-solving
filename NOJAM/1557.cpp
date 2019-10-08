#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int MAX = 100001;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);
  ll k; cin >> k;
  int mu[MAX];
  fill(mu, mu + MAX, 1); mu[0] = 0;
  // formula | for 1 to i * i <= n mu[i] * (n / (i * i))
  // get mu
  // https://math.stackexchange.com/questions/2099231/very-large-table-of-the-m%C3%B6bius-function
  for (int i = 2; i * i < MAX; i++) if (mu[i] == 1) {
    for (int j = i; j < MAX; j += i) mu[j] *= -i;
    for (int j = i * i; j < MAX; j += i * i) mu[j] = 0;
  }
  for (int i = 2; i < MAX; i++) {
    if (abs(mu[i]) == i) mu[i] /= i;
    else if (mu[i] != 0) mu[i] /= -abs(mu[i]);
  }
  ll l = 1, r = 2e9;
  while (l <= r) {
    ll mid = (l + r) / 2;
    ll num = 0;
    for (int i = 1; i * i <= mid; i++) num += mu[i] * (mid / (i * i));
    num < k ? l = mid + 1 : r = mid - 1;
  }
  cout << l;
  return 0;
}