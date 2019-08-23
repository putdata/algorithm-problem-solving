#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);
  int n, a, b;
  cin >> n >> a >> b;
  int arr[n][n];
  for (int i = 0; i < n; i++)
    for (int j = 0; j < n; j++) cin >> arr[i][j];
  int ok = true;
  for (int i = 0; i < n; i++) ok &= arr[a - 1][i] <= arr[a - 1][b - 1];
  for (int i = 0; i < n; i++) ok &= arr[i][b - 1] <= arr[a - 1][b - 1];
  ok ? cout << "HAPPY" : cout << "ANGRY";
  return 0;
}