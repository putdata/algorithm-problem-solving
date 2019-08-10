#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(0); cin.tie(0);
	int n; cin >> n;
	int a, b; cin >> a >> b;
	int m; cin >> m;
	vector<int> vec[101];
	bool vis[101]={};
	for(int i = 0; i < m; i++) {
		int x, y;
		cin >> x >> y;
		vec[x].push_back(y);
		vec[y].push_back(x);
	}
	queue<pair<int, int>> q;
	q.push({a, 0}); vis[a] = 1;
	while(!q.empty()) {
		auto [cur, chon] = q.front();
		if(cur == b) {
			cout << chon;
			return 0;
		}
		q.pop();
		for(auto x : vec[cur]) {
			if(vis[x]) continue;
			vis[x] = 1;
			q.push({x, chon + 1});
		}
	}
	cout << -1;
	return 0;
}