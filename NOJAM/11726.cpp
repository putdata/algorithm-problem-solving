#include <bits/stdc++.h>
#define pb push_back
#define mp make_pair
using namespace std;
typedef long long ll;
const ll INF = 2e9;
const ll MOD = 1e4+7;

int n,dp[1001]={0,1,2,3};
int main() {
  scanf("%d",&n);
  for(int i=4; i<=n; i++) {
    dp[i]=(dp[i-2]*dp[2]+dp[i-3])%MOD;
  }
  printf("%d",dp[n]);
  return 0;
}