#include <bits/stdc++.h>
using namespace std;
typedef pair<int,int> pii;

int V,E,K;
vector<pii> vec[20001];
int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    cin >> V >> E >> K;
    for(int i=0; i<E; i++) {
        int u,v,w;
        cin >> u >> v >> w;
        vec[u].push_back({v,w});
    }
    vector<int> dist(V+1,INT_MAX);
    priority_queue<pii, vector<pii>, greater<pii>> pq;
    pq.push({0,K}); dist[K]=0;
    while(!pq.empty()) {
        auto [w,v] = pq.top();
        pq.pop();
        if(dist[v] < w) continue;
        for(auto it : vec[v]) {
            auto [adjV,adjW] = it;
            int sumW = w + adjW;
            if(dist[adjV] > sumW) {
                dist[adjV] = sumW;
                pq.push({sumW,adjV});
            }
        }
    }
    for(int i=1; i<dist.size(); i++) {
        dist[i] == INT_MAX ? cout << "INF\n" : cout << dist[i] << '\n';
    }
    return 0;
}