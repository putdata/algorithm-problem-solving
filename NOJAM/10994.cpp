#include <bits/stdc++.h>
using namespace std;

int t;
char s[401][401];
void foo(int x, int n) {
  if (n == 1) s[x * 2][x * 2] = '*';
  else {
    for (int i = 0; i < 4 * (n - 1) + 1; i++) {
      s[2 * x][2 * x + i] = '*';
      s[2 * x + i][2 * x] = '*';
      s[2 * x + i][4 * (t - 1) + 1 - 2 * x - 1] = '*';
      s[4 * (t - 1) + 1 - 2 * x - 1][2 * x + i] = '*';
    }
    foo(x + 1, n - 1);
  }
}
int main() {
  cin >> t;
  memset(s, ' ', sizeof(s));
  foo(0, t);
  for (int i = 0; i < 4 * (t - 1) + 1; i++) {
    for (int j = 0; j < 4 * (t - 1) + 1; j++)
      cout << s[i][j];
    cout << '\n';
  }
  // 4 * (n - 1) + 1
  return 0;
}