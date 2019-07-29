#include <bits/stdc++.h>
using namespace std;

int N,M,arr[1001][1001],dp[1001][1001];
int main() {
  ios::sync_with_stdio(0); cin.tie(0);
  cin >> N >> M;
  for(int i=1; i<=N; i++)
    for(int j=1; j<=M; j++) cin >> arr[i][j];

  for(int i=1; i<=N; i++)
    for(int j=1; j<=M; j++)
      dp[i][j]=arr[i][j]+max(dp[i-1][j-1],max(dp[i][j-1],dp[i-1][j]));

  cout << dp[N][M];
  return 0;
}