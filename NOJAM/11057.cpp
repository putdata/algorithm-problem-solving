#include <bits/stdc++.h>
#define pb push_back
#define mp make_pair
using namespace std;
typedef long long ll;
const ll INF = 2e9;
const ll MOD = 1e4+7;

int n,ans,dp[2][10]={{1,1,1,1,1,1,1,1,1,1},{1,}};
int main() {
  scanf("%d",&n);
  for(int i=1; i<n; i++) {
    bool t=i%2;
    for(int j=1; j<10; j++)
      dp[t][j]=(dp[t][j-1]+dp[!t][j])%MOD;
  }
  for(int i=0; i<10; i++) {
    ans=(ans+dp[!(n%2)][i])%MOD;
  }
  printf("%d",ans);
  return 0;
}