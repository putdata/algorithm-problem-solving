#include <bits/stdc++.h>
using namespace std;

int n, p, cost[16][16], dp[1 << 16];
int foo(int vis, int on) {
	if (on >= p) return 0;
	if (dp[vis] == -1) {
		dp[vis] = 1e8;
		for (int i = 0; i < n; i++) {
			if (vis & (1 << i)) continue;
			for (int j = 0; j < n; j++) {
				if (vis & (1 << j)) {
					dp[vis] = min(dp[vis], cost[j][i] + foo(vis | (1 << i), on + 1));
				}
			}
		}
	}
	return dp[vis];
}
int main() {
	ios::sync_with_stdio(0); cin.tie(0);
	cin >> n;
	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++) cin >> cost[i][j];
	string s; cin >> s >> p;
	int vis = 0, on = 0;
	for (int i = 0; i < n; i++) {
		if (s[i] == 'Y') {
			vis |= (1 << i);
			on++;
		}
	}
	if (on == 0 && p > 0) {
		cout << -1;
		return 0;
	}
	memset(dp, -1, sizeof(dp));
	int ans = foo(vis, on);
	cout << ans;
	return 0;
}