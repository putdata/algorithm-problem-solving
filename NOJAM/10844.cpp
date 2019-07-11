#include <bits/stdc++.h>
#define pb push_back
#define mp make_pair
using namespace std;
typedef long long ll;
const ll INF = 2e9;
const ll MOD = 1e9;

int N,dp[101][10],ans;
int main() {
  scanf("%d",&N);
  for(int i=1; i<10; i++) dp[0][i]=1;
  for(int i=1; i<N; i++) {
    dp[i][0]=dp[i-1][1];
    for(int j=1; j<9; j++) dp[i][j]=(dp[i-1][j-1]+dp[i-1][j+1])%MOD;
    dp[i][9]=dp[i-1][8];
  }
  for(int i=0; i<10; i++) ans=(ans+dp[N-1][i])%MOD;
  printf("%d",ans);
  return 0;
}