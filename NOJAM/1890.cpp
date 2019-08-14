#include <bits/stdc++.h>
using namespace std;

long long a[100][100];
int main() {
  ios::sync_with_stdio(0); cin.tie(0);
  int n;
  cin >> n;
  a[0][0] = 1;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      int x;
      cin >> x;
      if (i == n - 1 && j == n - 1) continue;
      int nx = i + x, ny = j + x;
      if(nx < n) a[nx][j] += a[i][j];
      if(ny < n) a[i][ny] += a[i][j];
    }
  }
  cout << a[n - 1][n - 1];
  return 0;
}