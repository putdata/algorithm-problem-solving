#include <bits/stdc++.h>
using namespace std;

int n,dp[31]={1,0,3,};
int main() {
  cin >> n;
  for(int i=4; i<=n; i+=2) {
    dp[i]=dp[i-2]*3;
    for(int j=4; j<=i; j+=2)
      dp[i]+=dp[i-j]*2;
  }
  cout << dp[n];
  return 0;
}