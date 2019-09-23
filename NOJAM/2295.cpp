#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);
  int n; cin >> n;
  int a[n];
  for (int i = 0; i < n; i++) cin >> a[i];
  sort(a, a + n);
  vector<int> vec;
  for (int i = 0; i < n; i++)
    for (int j = 0; j < n; j++) vec.push_back(a[i] + a[j]);
  sort(vec.begin(), vec.end());
  for (int i = n - 1; i > -1; i--) {
    for (int j = 0; j < n; j++) {
      if (binary_search(vec.begin(), vec.end(), a[i] - a[j])) {
        cout << a[i];
        return 0;
      }
    }
  }
  return 0;
}