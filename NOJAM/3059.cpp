#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);
  int T;
  cin >> T;
  while(T--) {
    int ans=0;
    string s;
    bool chk[27]={0,};
    cin >> s;
    for(int i=0; i<s.length(); i++) {
      chk[s[i]-'A']=1;
    }
    for(int i=0; i<26; i++)
      if(!chk[i]) ans+=i+'A';
    cout << ans << '\n';
  }
  return 0;
}