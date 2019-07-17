#include <bits/stdc++.h>
using namespace std;

string s;
int main() {
  ios::sync_with_stdio(0); cin.tie(0);
  cin >> s;
  if(s.length()==1 && s[0]=='0') {
    cout << 0;
    return 0;
  }
  for(int i=0; i<s.length(); i++) {
    int tmp=s[i]-'0';
    string t="";
    while(tmp) {
      t.insert(t.begin(),tmp%2+'0');
      tmp/=2;
    }
    if(i>0) {
      if(t.length()==0) t="000";
      else if(t.length()==1) t="00"+t;
      else if(t.length()==2) t="0"+t;
    }
    cout << t;
    
  }
  return 0;
}