#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, m, M, T, R;
  cin >> N >> m >> M >> T >> R;
  if (m + T > M) {
    cout << -1;
    return 0;
  }
  int time = 0;
  int X = m;
  while (N) {
    time++;
    if (X + T <= M) {
      X += T;
      N--;
    } else X = max(m, X - R);
  }
  cout << time;
  return 0;
}