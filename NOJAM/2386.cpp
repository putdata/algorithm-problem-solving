#include <bits/stdc++.h>
using namespace std;

int main() {
  while(1) {
    string s;
    getline(cin, s);
    if(s=="#") break;
    char token = s[0];
    int ans=0;
    for(int i=2; i<s.length(); i++) {
      if(s[i]==token || s[i]==token-32) ans++;
    }
    cout << token << ' ' << ans << '\n';
  }
  return 0;
}