#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);
  int n; cin >> n;
  vector<bool> prime(100001, 0);
  for (int i = 2; i * i <= 100000; i++) {
    if (prime[i]) continue;
    for (int j = i * i; j <= 100000; j += i) prime[j] = 1;
  }
  prime[n] ? cout << "No" : cout << "Yes";
  return 0;
}