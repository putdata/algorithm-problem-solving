#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(0); cin.tie(0);
	int F, S, G, U, D, ans = 0;
	cin >> F >> S >> G >> U >> D;
	vector<bool> vis(F + 1, 0);
	priority_queue<pair<int, int>> q;
	q.push({0, S});
	while (!q.empty()) {
		auto [cost, cur] = q.top();
		q.pop();
		if (cur == G) {
			cout << -cost;
			return 0;
		}
		int up = cur + U;
		int down = cur - D;
		if (up <= F && !vis[up]) {
			vis[up] = 1;
			q.push({cost - 1, up});
		}
		if (down > -1 && !vis[down]) {
			vis[down] = 1;
			q.push({cost - 1, down});
		}
	}
	cout << "use the stairs";
	return 0;
}