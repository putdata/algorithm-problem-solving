class Solution {
public:
    int minCost(vector<vector<int>>& grid, int k) {
        int dx[] = {0, 0, 1, -1}, dy[] = {1, -1, 0, 0};
        int n = grid.size(), m = grid[0].size();
        // tot, k, n, m, dir
        priority_queue<tuple<int, int, int, int, int>> pq;
        
        const int INF = 1e9;
        vector dist(k + 1, vector(n, vector(m, vector<int>(4, INF))));
        for (int i = 0; i < 4; i++) {
            dist[0][0][0][i] = 0;
            pq.push({0, 0, 0, 0, i});
        }
        while (!pq.empty()) {
            auto [tot, curK, curN, curM, curDir] = pq.top(); pq.pop();
            tot = -tot;
            if (dist[curK][curN][curM][curDir] < tot) continue;
            for (int i = 0; i < 4; i++) {
                int nx = curN + dx[i], ny = curM + dy[i];
                int nk = curK + (curDir != i);
                if (nx < 0 || nx >= n || ny < 0 || ny >= m || nk > k) continue;
                int& nd = dist[nk][nx][ny][i];
                if (nd > tot + grid[nx][ny]) {
                    nd = tot + grid[nx][ny];
                    pq.push({-nd, nk, nx, ny, i});
                }
            }
        }
        int mn = INF;
        for (int i = 0; i <= k; i++) {
            for (int j = 0; j < 4; j++)
                mn = min(mn, dist[i][n - 1][m - 1][j]);
        }
        return mn == INF ? -1 : grid[0][0] + mn;
    }
};