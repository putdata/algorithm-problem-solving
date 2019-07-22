#include <bits/stdc++.h>
using namespace std;

int N,dp[1001][3];
int main() {
  ios::sync_with_stdio(0); cin.tie(0);
  cin >> N;
  for(int i=1; i<=N; i++) {
    int a,b,c;
    cin >> a >> b >> c;
    dp[i][0]=a+min(dp[i-1][1],dp[i-1][2]);
    dp[i][1]=b+min(dp[i-1][0],dp[i-1][2]);
    dp[i][2]=c+min(dp[i-1][0],dp[i-1][1]);
  }
  cout << min(dp[N][0],min(dp[N][1],dp[N][2]));
  return 0;
}