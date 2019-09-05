#include <bits/stdc++.h>
using namespace std;

int n, m, b[14 * 14][1 << 14];
int foo(int cur, int status) {
  if (cur >= n * m) return cur == n * m && status == 0;
  int &ret = b[cur][status];
  if (ret == -1) {
    if (status & 1) ret = foo(cur + 1, status >> 1);
    else {
      ret = foo(cur + 1, (status >> 1) | (1 << (m - 1))) + ((cur % m == m - 1) || (status & 2) ? 0 : foo(cur + 2, status >> 2));
    }
  } 
  return ret % 9901;
}

int main() {
  ios::sync_with_stdio(0); cin.tie(0);
  cin >> n >> m;
  memset(b, -1, sizeof(b));
  cout << foo(0, 0);
  return 0;
}