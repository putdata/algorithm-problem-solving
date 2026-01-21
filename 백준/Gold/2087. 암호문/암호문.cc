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

int n, k;
vector<int> vec;
map<int, int> mp;
ll ans = 0;

void left(int cur, int sum, ll bit) {
  if (cur == n / 2) {
    mp[sum] = bit;
    return;
  }
  left(cur + 1, sum, bit);
  left(cur + 1, sum + vec[cur], bit | (1LL << cur));
}

void right(int cur, int sum, ll bit) {
  if (cur == n) {
    auto it = mp.find(k - sum);
    if (it != mp.end()) ans = bit | it->second;
    return;
  }
  right(cur + 1, sum, bit);
  right(cur + 1, sum + vec[cur], bit | (1LL << cur));
}


void solve() {
  cin >> n;
  vec.resize(n);
  for (int i = 0; i < n; i++) {
    cin >> vec[i];
  }
  cin >> k;
  left(0, 0, 0);
  right(n / 2, 0, 0);
  string s = "";
  for (int i = 0; i < n; i++) s.push_back(ans & (1LL << i) ? '1' : '0');
  cout << s;
}

int main() {
  cin.tie(0)->sync_with_stdio(0);
  solve();
  debug << "\nTime elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s.\n";
  return 0;
}