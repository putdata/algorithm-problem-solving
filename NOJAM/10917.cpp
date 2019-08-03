// #include <bits/stdc++.h>
// using namespace std;

// int N,M;
// vector<int> vec[200001];
// bool vis[200001];
// priority_queue<pair<int,int>> pq;
// int main() {
//     ios::sync_with_stdio(0); cin.tie(0);
//     cin >> N >> M;
//     for(int i=0; i<M; i++) {
//         int a,b;
//         cin >> a >> b;
//         vec[a].push_back(b);
//     }
//     pq.push({0,1}); vis[1]=1;
//     while(!pq.empty()) {
//         auto [mov,cur] = pq.top();
//         pq.pop();
//         if(cur == N) {
//             cout << -mov;
//             return 0;
//         }
//         for(auto it : vec[cur]) {
//             if(vis[it]) continue;
//             pq.push({mov-1,it});
//             vis[it]=1;
//         }
//     }
//     cout << -1;
//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;

int N,M;
vector<int> vec[200001];
int dp[200001];
priority_queue<pair<int,int>> pq;
int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    cin >> N >> M;
    fill(dp,dp+N+1,999999); dp[1]=0;
    for(int i=0; i<M; i++) {
        int a,b;
        cin >> a >> b;
        vec[a].push_back(b);
    }
    for(int i=1; i<=N; i++) {
        for(auto j : vec[i])
            dp[j]=min(dp[j],dp[i]+1);
    }
    if(dp[N]==999999) cout << -1;
    else cout << dp[N];
    return 0;
}