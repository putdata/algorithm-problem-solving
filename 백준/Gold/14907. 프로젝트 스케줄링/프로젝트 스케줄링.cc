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

void solve() {
  string s;
  vector<vector<int>> adj(30);
  vector<int> indeg(30), cost(30);
  while (getline(cin, s)) {
    stringstream ss(s);
    string a, c; int b;
    ss >> a >> b >> c;
    cost[a[0] - 'A'] = b;
    for (char x : c) {
      adj[a[0] - 'A'].push_back(x - 'A');
      indeg[x - 'A']++;
    }
  }
  priority_queue<pii> q;
  int ans = 0;
  for (int i = 0; i < 26; i++) if (indeg[i] == 0) q.push({-cost[i], i});
  while (!q.empty()) {
    auto [tot, cur] = q.top(); q.pop();
    tot = -tot;
    ans = max(ans, tot);
    for (auto next : adj[cur]) if (--indeg[next] == 0) {
      q.push({-(tot + cost[next]), next});
    }
  }
  cout << ans;
}

int main() {
  cin.tie(0)->sync_with_stdio(0);
  solve();
  debug << "\nTime elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s.\n";
  return 0;
}