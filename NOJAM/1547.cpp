#include <bits/stdc++.h>
using namespace std;

int main() {
  int m; cin >> m;
  int cup[4]={0, 1};
  while (m--) {
    int a, b;
    cin >> a >> b;
    swap(cup[a], cup[b]);
  }
  for (int i = 1; i <= 3; i++)
    if (cup[i]) cout << i;
  return 0;
}