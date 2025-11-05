#include <bits/stdc++.h>
using namespace std;

vector<int> solution(int n, vector<vector<int>> paths, vector<int> gates, vector<int> summits) {
    pair<int, int> ans = {1e9, 1e9};
    vector<bool> isSummit(n + 1);
    for (auto x : summits) isSummit[x] = 1;
    vector<vector<pair<int, int>>> adj(n + 1);
    for (auto v : paths) {
        adj[v[0]].push_back({v[1], v[2]});
        adj[v[1]].push_back({v[0], v[2]});
    }
    int lo = 1, hi = 1e7 + 1;
    while (lo + 1 < hi) {
        pair<int, int> res = {1e9, 1e9};
        int mid = (lo + hi) / 2;
        queue<pair<int, int>> q;
        vector<bool> vis(n + 1);
        for (auto x : gates) {
            q.push({x, 0});
            vis[x] = 1;
        }
        while (!q.empty()) {
            auto [cur, val] = q.front(); q.pop();
            if (isSummit[cur]) {
                res = min(res, {val, cur});
                continue;
            }
            for (auto [next, w] : adj[cur]) if (!vis[next] && w <= mid) {
                vis[next] = 1;
                q.push({next, max(val, w)});
            }
        }
        ans = min(ans, res);
        res.first == 1e9 ? lo = mid : hi = mid;
    }
    vector<int> ret = {ans.second, ans.first};
    return ret;
}