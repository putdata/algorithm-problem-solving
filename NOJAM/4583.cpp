#include <bits/stdc++.h>
using namespace std;
#define c(x) s[i]!=(x)

int main() {
  ios::sync_with_stdio(0); cin.tie(0);
  while(1) {
    bool flag=0;
    string s;
    cin >> s;
    if(s=="#") break;
    for(int i=0; i<s.length(); i++) {
      if(c('b') && c('d') && c('p') && c('q') && c('i') && c('o') && c('v') && c('w') && c('x')) {
        cout << "INVALID" << '\n';
        flag=1;
        break;
      }
      if(s[i]=='b') s[i]='d';
      else if(s[i]=='d') s[i]='b';
      else if(s[i]=='p') s[i]='q';
      else if(s[i]=='q') s[i]='p';
    }
    if(flag) continue;
    reverse(s.begin(),s.end());
    cout << s << '\n';
  }
  return 0;
}