#include <bits/stdc++.h>
using namespace std;

long long n,dp[91]={0,1,1,2};
int main() {
  cin >> n;
  for(int i=4; i<=n; i++) dp[i]=dp[i-1]+dp[i-2];
  cout << dp[n];
  return 0;
}