#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(0); cin.tie(0);
	int R, C;
	cin >> R >> C;
	int sx, sy;
	int dx[] = {1, 0, 0, -1}, dy[] = {0, 1, -1, 0};
	vector<vector<int>> m(R, vector<int>(C, 0));
	queue<tuple<int, int, int>> water;
	for (int i = 0; i < R; i++) {
		for (int j = 0; j < C; j++) {
			char c;
			cin >> c;
			if (c == 'S') {sx = i; sy = j;}
			else if (c == 'D') m[i][j] = -2;
			else if (c == 'X') m[i][j] = -1;
			else if (c == '*') {
				water.push({i ,j, 1});
				m[i][j] = 1;
			}
		}
	}
	while (!water.empty()) {
		auto [x, y, cost] = water.front();
		water.pop();
		for (int i = 0; i < 4; i++) {
			int nx = x + dx[i], ny = y + dy[i];
			if (nx < 0 || nx >= R || ny < 0 || ny >= C) continue;
			if (m[nx][ny] == 0) {
				m[nx][ny] = cost + 1;
				water.push({nx, ny, cost + 1});
			}
		}
	}
	queue<tuple<int, int, int>> dochi;
	dochi.push({sx, sy, 0});
	while (!dochi.empty()) {
		auto [x, y, cost] = dochi.front();
		dochi.pop();
		for (int i = 0; i < 4; i++) {
			int nx = x + dx[i], ny = y + dy[i];
			if (nx < 0 || nx >= R || ny < 0 || ny >= C) continue;
			if (m[nx][ny] - 1 > cost + 1 || m[nx][ny] == 0) {
				m[nx][ny] = -1;
				dochi.push({nx, ny, cost + 1});
			} else if (m[nx][ny] == -2) {
				cout << cost + 1;
				return 0;
			}
		}
	}
	cout << "KAKTUS";
	return 0;
}