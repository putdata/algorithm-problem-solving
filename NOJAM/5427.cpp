#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(0); cin.tie(0);
	int T;
	cin >> T;
	while (T--) {
		int w, h;
		int sX, sY;
		int dX[] = {-1, 1, 0, 0}, dY[] = {0, 0, 1, -1};
		cin >> w >> h;
		vector<vector<int>> room(h, vector<int>(w));
		queue<tuple<int, int, int>> fire;
		for (int i = 0; i < h; i++) {
			for (int j = 0; j < w; j++) {
				char c;
				cin >> c;
				if (c == '@') {
					sX = i;
					sY = j;
					room[i][j] = 0;
				}
				else if (c == '.') room[i][j] = 0;
				else if (c == '*') {
					room[i][j] = 1;
					fire.push({i, j, 1});
				}
				else room[i][j] = -1;
			}
		}
		while (!fire.empty()) {
			auto [x, y, cost] = fire.front();
			fire.pop();
			for (int i = 0; i < 4; i++) {
				int nX = x + dX[i], nY = y + dY[i];
				if (nX < 0 || nX > h - 1 || nY < 0 || nY > w - 1) continue;
				if (room[nX][nY] == 0) {
					fire.push({nX, nY, cost + 1});
					room[nX][nY] = cost + 1;
				}
			}
		}
		bool ok = false;
		priority_queue<tuple<int, int, int>> pq;
		pq.push({0, sX, sY});
		room[sX][sY] = -1;
		while (!pq.empty()) {
			auto [now, x, y] = pq.top();
			pq.pop();
			if (x == 0 || x == h - 1 || y == 0 || y == w - 1) {
				cout << -now + 1 << '\n';
				ok = true;
				break;
			}
			for (int i = 0; i < 4; i++) {
				int nX = x + dX[i];
				int nY = y + dY[i];
				if (nX < 0 || nX > h - 1 || nY < 0 || nY > w - 1) continue;
				if (room[nX][nY] == -1) continue;
				if (room[nX][nY] - 1 > -now + 1 || room[nX][nY] == 0) {
					room[nX][nY] = -1;
					pq.push({now - 1, nX, nY});
				}
			}
		}
		if (!ok) cout << "IMPOSSIBLE\n";
	}
	return 0;
}