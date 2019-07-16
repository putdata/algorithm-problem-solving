#include <bits/stdc++.h>
using namespace std;

int N, dp[1001];
int main() {
  scanf("%d",&N);
  for(int i=1; i<=N; i++) {
    int pi;
    scanf("%d",&pi);
    for(int j=0; j<=N-i; j++) {
      dp[i+j]=max(dp[i+j],dp[j]+pi);
    }
  }
  printf("%d",dp[N]);
  return 0;
}