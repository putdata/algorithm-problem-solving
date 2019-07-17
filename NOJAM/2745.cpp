#include <bits/stdc++.h>
using namespace std;

int B,ans;
string s;
int main() {
  cin >> s >> B;
  reverse(s.begin(),s.end());
  for(int i=0; i<s.length(); i++) {
    if('0'<=s[i] && s[i]<='9') ans+=(s[i]-'0')*pow(B,i);
    else ans+=(s[i]-'A'+10)*pow(B,i);
  }
  cout << ans;
  return 0;
}