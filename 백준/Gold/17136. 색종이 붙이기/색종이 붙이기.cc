#include <bits/stdc++.h>
using namespace std;

#ifdef LOCAL_TEST
constexpr bool isLOCAL = true;
#else
constexpr bool isLOCAL = false;
#endif

#define debug if constexpr (isLOCAL) cerr

typedef long long ll;
typedef pair<int, int> pii;
#define sz(x) ((int)x.size())
#define all(x) (x).begin(), (x).end()

const int MOD = 1e9 + 7;
const int INF = 1e9;

int arr[10][10], used[6];

bool isGood(int x, int y, int k) {
  if (x + k > 10 || y + k > 10) return false;

  int cnt = 0;
  for (int i = x; i < x + k; i++)
    for (int j = y; j < y + k; j++) cnt += arr[i][j];
  return cnt == k * k;
}

int bfs() {
  int ret = 1e9;
  for (int i = 0; i < 10; i++) {
    for (int j = 0; j < 10; j++) if (arr[i][j]) {
      for (int k = 5; k > 0; k--) {
        if (used[k] >= 5 || !isGood(i, j, k)) continue;
        used[k]++;
        for (int ii = i; ii < i + k; ii++)
          for (int jj = j; jj < j + k; jj++) arr[ii][jj] = 0;
        ret = min(ret, 1 + bfs());
        used[k]--;
        for (int ii = i; ii < i + k; ii++)
          for (int jj = j; jj < j + k; jj++) arr[ii][jj] = 1;
      }
      return ret;
    }
  }
  return 0;
}

void solve() {
  for (int i = 0; i < 10; i++) for (int j = 0; j < 10; j++) cin >> arr[i][j];
  int ans = bfs();
  cout << (ans == 1e9 ? -1 : ans);
}

int main() {
  cin.tie(0)->sync_with_stdio(0);
  solve();
  debug << "\nTime elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s.\n";
  return 0;
}