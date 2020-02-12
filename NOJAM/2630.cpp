#include <bits/stdc++.h>
using namespace std;

int n, cutW, cutB;
vector<vector<int>> vec;
void foo(int x, int y, int xx, int yy) {
  int w = 0, b = 0;
  for (int i = x; i < xx; i++)
    for (int j = y; j < yy; j++)
      vec[i][j] ? b++ : w++;
  if (w && b) {
    int size = (xx - x) / 2;
    foo(x, y, x + size, y + size);
    foo(x, y + size, x + size, yy);
    foo(x + size, y, xx, y + size);
    foo(x + size, y + size, xx, yy);
  } else w ? cutW++ : cutB++;
}

int main() {
  ios::sync_with_stdio(0); cin.tie(0);
  cin >> n;
  vec.resize(n);
  for (int i = 0; i < n; i++) {
    vec[i].resize(n);
    for (int j = 0; j < n; j++) cin >> vec[i][j];
  }
  foo(0, 0, n, n);
  cout << cutW << '\n' << cutB;
  return 0;
}