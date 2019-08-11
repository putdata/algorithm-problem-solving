#include <bits/stdc++.h>
using namespace std;

const int MAX = 1111111;
vector<int> adj[MAX];
int dp[MAX][2];
int N;
int foo(int cur, int prev, bool isEarly) {
  int &res = dp[cur][isEarly];
  if (res != -1) return res;
  res = isEarly;
  for (auto it : adj[cur]) {
    if (it == prev) continue;
    if (isEarly) res += min(foo(it, cur, 1), foo(it, cur, 0));
    else res += foo(it, cur, 1);
  }
  return res;
}

int main() {
  ios::sync_with_stdio(0); cin.tie(0);
  cin >> N;
  for (int i = 0; i < N - 1; i++) {
    int a, b;
    cin >> a >> b;
    adj[a].push_back(b);
    adj[b].push_back(a);
  }
  memset(dp, -1, sizeof(dp));
  cout << min(foo(1, -1, 0), foo(1, -1, 1));
  return 0;
}