#include <bits/stdc++.h>
using namespace std;

int n,a,dp[100001],ans=-9999;
int main() {
  scanf("%d",&n);
  for(int i=1; i<=n; i++) {
    scanf("%d",&a);
    dp[i]=max(dp[i-1]+a,a);
    if(dp[i]>ans) ans=dp[i];
  }
  printf("%d",ans);
  return 0;
}