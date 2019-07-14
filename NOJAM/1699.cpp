#include <bits/stdc++.h>
using namespace std;

int n,dp[100001]={0,1,2};
int main() {
  scanf("%d",&n);
  for(int i=3; i<=n; i++) {
    dp[i]=dp[i-1]+1;
    for(int j=1; j*j<=i; j++) {
      if(dp[i]>dp[i-j*j]+1) dp[i]=dp[i-j*j]+1;
    }
  }
  printf("%d",dp[n]);
  return 0;
}