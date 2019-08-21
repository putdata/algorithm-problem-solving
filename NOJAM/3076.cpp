#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);
  int r, c, a, b;
  string s[101] = {};
  cin >> r >> c >> a >> b;
  for (int i = 0; i < r; i++)
    for (int j = 0; j < c; j++)
      for (int ii = 0; ii < a; ii++)
        for (int jj = 0; jj < b; jj++)
          (i + j) % 2 ? s[i * a + ii].push_back('.') : s[i * a + ii].push_back('X');
  for (int i = 0; i < r * a; i++)
    cout << s[i] << '\n';
  return 0;
}