#include <bits/stdc++.h>
using namespace std;

int n,a[1001],dp[1001],ans;
int main() {
  scanf("%d",&n);
  for(int i=0; i<n; i++) scanf("%d",a+i);
  for(int i=0; i<n; i++) {
    int s=0;
    for(int j=0; j<i; j++) {
      if(a[i]>a[j] && s<dp[j]) s=dp[j];
    }
    dp[i]=s+a[i];
    if(dp[i]>ans) ans=dp[i];
  }
  printf("%d",ans);
  return 0;
}