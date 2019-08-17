#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, m, k;
  cin >> n >> m;
  int mat1[n][m];
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++)
      cin >> mat1[i][j];
  }
  cin >> m >> k;
  int mat2[m][k];
  for (int i = 0; i < m; i++) {
    for (int j = 0; j < k; j++)
      cin >> mat2[i][j];
  }
  int ans[n][k];
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < k; j++) {
      int sum = 0;
      for (int l = 0; l < m; l++) {
        sum += mat1[i][l] * mat2[l][j];
      }
      ans[i][j] = sum;
    }
  }
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < k; j++)
      cout << ans[i][j] << ' ';
    cout << '\n';
  }
  return 0;
}