#include <bits/stdc++.h>
using namespace std;

typedef pair<int,int> pii;

int N,M,first,last;
vector<pii> vec[1001];
int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    cin >> N >> M;
    for(int i=0; i<M; i++) {
        int st,en,co;
        cin >> st >> en >> co;
        vec[st].push_back({en,co});
    }
    cin >> first >> last;
    vector<int> dist(N+1,-1);
    priority_queue<pii> pq;
    dist[first]=0;
    pq.push({0,first});
    while(!pq.empty()) {
        auto [cost,cur] = pq.top();
        pq.pop();
        if(dist[cur] < -cost || dist[cur] == -1) continue;
        for(auto it : vec[cur]) {
            auto [adjV,adjC] = it;
            int sum = -cost + adjC;
            if(sum < dist[adjV] || dist[adjV] == -1) {
                dist[adjV] = sum;
                pq.push({-sum,adjV});
            }
        }
    }
    cout << dist[last];
    return 0;
}