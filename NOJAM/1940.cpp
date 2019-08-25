#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, m; cin >> n >> m;
  int mat[n];
  for (int i = 0; i < n; i++) cin >> mat[i];
  sort(mat, mat + n);
  int l = 0, r = n - 1, ans = 0;
  while (l < r) {
    int sum = mat[l] + mat[r];
    if (sum == m) {
      ans++;
      l++; r--;
    } else sum < m ? l++ : r--;
  }
  cout << ans;
  return 0;
}