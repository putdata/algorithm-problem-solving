#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, m; cin >> n >> m;
  int arr[n];
  for (int i = 0; i < n; i++) arr[i] = i + 1;
  while (m--) {
    int x, y, z; cin >> x >> y >> z;
    int tmp[n];
    for (int i = x - 1; i < z; i++) tmp[i] = arr[i];
    for (int i = x - 1; i < x + y - z; i++) arr[i] = arr[i + z - x];
    for (int i = x + y - z; i < y; i++) arr[i] = tmp[i- y + z - 1];
  }
  for (int i = 0; i < n; i++) cout << arr[i] << ' ';
  return 0;
}