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

pii func(char arr[3][3]) {
  int row[3][2]{}, col[3][2]{};
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      if (arr[i][j] == 'O') {
        row[i][0]++;
        col[j][0]++;
      } else if (arr[i][j] == 'X') {
        row[i][1]++;
        col[j][1]++;
      }
    }
  }
  int sum1 = 0, sum2 = 0;
  for (int i = 0; i < 3; i++) {
    sum1 += (row[i][0] == 3) + (col[i][0] == 3);
    sum2 += (row[i][1] == 3) + (col[i][1] == 3);
  }
  if (arr[0][0] == arr[1][1] && arr[1][1] == arr[2][2]) {
    if (arr[0][0] == 'O') sum1++;
    else if (arr[0][0] == 'X') sum2++;
  }
  if (arr[0][2] == arr[1][1] && arr[1][1] == arr[2][0]) {
    if (arr[0][2] == 'O') sum1++;
    else if (arr[0][2] == 'X') sum2++;
  }
  return {sum1, sum2};
}

void solve() {
  string s;
  while (cin >> s) {
    if (s == "end") break;
    char arr[3][3];
    int cntO = 0, cntX = 0;
    for (int i = 0; i < 9; i++) {
      arr[i / 3][i % 3] = s[i];
      if (s[i] == 'O') cntO++;
      else if (s[i] == 'X') cntX++;
    }
    if (!(cntX == cntO || cntX == cntO + 1)) {
      cout << "invalid\n";
      continue;
    }
    bool flag = false;
    auto [x, y] = func(arr);
    if (min(x, y) != 0) goto label;
    for (int i = 0; i < 3; i++) {
      for (int j = 0; j < 3; j++) {
        char tmp = arr[i][j];
        arr[i][j] = '.';
        auto [xx, yy] = func(arr);
        arr[i][j] = tmp;
        if (((y > 0 && cntX == cntO + 1) || (x > 0 && cntX == cntO) || (max(x, y) == 0 && cntX + cntO == 9)) && max(xx, yy) == 0) {
          flag = true;
          goto label;
        }
      }
    }
    label:
    cout << (flag ? "valid" : "invalid") << '\n';
  }
}

int main() {
  cin.tie(0)->sync_with_stdio(0);
  solve();
  debug << "\nTime elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s.\n";
  return 0;
}