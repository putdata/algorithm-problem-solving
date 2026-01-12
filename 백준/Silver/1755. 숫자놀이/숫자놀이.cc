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

string s[10] = {
  "zero", "one", "two", "three",
  "four", "five", "six", "seven",
  "eight", "nine"
};

void solve() {
  string arr[100];
  for (int i = 1; i <= 99; i++) {
    if (i < 10) arr[i] = s[i];
    else arr[i] = s[i / 10] + " " + s[i % 10];
  }
  vector<pair<string, int>> vec;
  int n, m; cin >> n >> m;
  for (int i = n; i <= m; i++) vec.push_back({arr[i], i});
  sort(all(vec));
  int cnt = 0;
  for (auto [v, num] : vec) {
    cout << num << ' ';
    if (++cnt % 10 == 0) cout << '\n';
  }
}

int main() {
  cin.tie(0)->sync_with_stdio(0);
  solve();
  debug << "\nTime elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s.\n";
  return 0;
}