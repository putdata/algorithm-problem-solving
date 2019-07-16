#include <bits/stdc++.h>
using namespace std;

long long dp[5001]={1,1};
string s;
int main() {
  cin >> s;
  if(s[0]=='0') {
    cout << '0';
    return 0;
  }
  for(int i=1; i<s.length(); i++) {
    if(s[i]!='0') dp[i+1]=dp[i];
    int k=(s[i-1]-'0')*10 + s[i]-'0';
    if(9<k && k<27) dp[i+1]=(dp[i+1]+dp[i-1])%1000000;
  }
  cout << dp[s.length()];
  return 0;
}