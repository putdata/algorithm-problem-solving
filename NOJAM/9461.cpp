#include <bits/stdc++.h>
using namespace std;

long long T,dp[101]={0,1,1,1,2,2};
int main() {
  cin >> T;
  while(T--) {
    int N; cin >> N;
    if(dp[N]) {
      cout << dp[N] << '\n';
      continue;
    }
    for(int i=6; i<=N; i++)
      dp[i]=dp[i-1]+dp[i-5];
    cout << dp[N] << '\n';
  }
  return 0;
}