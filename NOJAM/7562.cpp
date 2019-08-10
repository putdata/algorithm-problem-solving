#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(0); cin.tie(0);
	int T; cin >> T;
	while (T--) {
		int l;
		int curX, curY, toX, toY;
		int dirX[] = {-2, -2, -1, -1, 1, 1, 2, 2};
		int dirY[] = {1, -1, 2, -2, 2, -2, 1, -1};
		cin >> l;
		cin >> curX >> curY;
		cin >> toX >> toY;
		queue<tuple<int, int, int>> q;
		vector<vector<bool>> vis(l, vector<bool>(l, 0));
		q.push({curX, curY, 0});
		while (!q.empty()) {
			auto [x, y, cost] = q.front();
			q.pop();
			if (x == toX && y == toY) {
				cout << cost << '\n';
				break;
			}
			for (int i = 0; i < 8; i++) {
				int nX = x + dirX[i], nY = y + dirY[i];
				if ((-1 < nX && nX < l) && (-1 < nY && nY < l)) {
					if (vis[nX][nY]) continue;
					vis[nX][nY] = 1;
					q.push({nX, nY, cost + 1});
				}
			}
		}
	}
	return 0;
}