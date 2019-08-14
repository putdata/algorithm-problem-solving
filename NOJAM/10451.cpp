#include <bits/stdc++.h>
using namespace std;

int seq[1001];
bool vis[1001];
void dfs(int x) {
  if (!vis[seq[x]]) {
    vis[seq[x]] = 1;
    dfs(seq[x]);
  }
}
int main() {
  ios::sync_with_stdio(0); cin.tie(0);
  int t;
  cin >> t;
  while (t--) {
    int n, ans = 0;
    cin >> n;
    for (int i = 1; i <= n; i++) cin >> seq[i];
    for (int i = 1; i <= n; i++) {
      if (!vis[i]) {
        ans++;
        vis[i] = 1;
        dfs(i);
      }
    }
    cout << ans << '\n';
    memset(vis, 0, sizeof(vis));
  }
  return 0;
}