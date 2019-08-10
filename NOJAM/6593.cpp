#include <bits/stdc++.h>
using namespace std;

const int MAX = 30;

int main() {
	ios::sync_with_stdio(0); cin.tie(0);
	for (;;) {
		int L, R, C;
		tuple<int, int, int, int> start;
		int end[3];
		int buil[MAX][MAX][MAX] = {};
		int dX[] = {0, 0, 0, 0, 1, -1};
		int dY[] = {-1, 1, 0, 0, 0, 0};
		int dZ[] = {0, 0, -1, 1, 0, 0};
		queue<tuple<int, int, int, int>> q;
		cin >> L >> R >> C;
		if (L == 0) break;
		for (int i = 0; i < L; i++) {
			for (int j = 0; j < R; j++) {
				for (int k = 0; k < C; k++) {
					char c; cin >> c;
					if (c == 'S') {
						start = {i, j, k, 0};
						buil[i][j][k] = 1;
					}
					else if (c == 'E') end[0] = i, end[1] = j, end[2] = k;
					else if (c == '.') buil[i][j][k] = 0;
					else buil[i][j][k] = 1;
				}
			}
		}
		bool ok = false;
		q.push(start);
		while(!q.empty()) {
			auto [x, y, z, cost] = q.front();
			q.pop();
			if (x == end[0] && y == end[1] && z == end[2]) {
				cout << "Escaped in " << cost << " minute(s).\n";
				ok = true;
				break;
			}
			for (int i= 0; i < 6; i++) {
				int nX = x + dX[i];
				int nY = y + dY[i];
				int nZ = z + dZ[i];
				if (!((-1 < nX && nX < L) && (-1 < nY && nY < R) && (-1 < nZ && nZ < C))) continue;
				if (buil[nX][nY][nZ]) continue;
				q.push({nX, nY, nZ, cost + 1});
				buil[nX][nY][nZ] = 1;
			}
		}
		if (!ok) cout << "Trapped!\n";
	}
	return 0;
}