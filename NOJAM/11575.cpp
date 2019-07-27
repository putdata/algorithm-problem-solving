#include <bits/stdc++.h>
using namespace std;

int T;
int main() {
  ios::sync_with_stdio(0); cin.tie(0);
  cin >> T;
  while(T--) {
    int a,b; cin >> a >> b;
    string s; cin >> s;
    for(int i=0; i<s.length(); i++)
      s[i]=(a*(s[i]-'A')+b)%26+'A';
    cout << s << '\n';
  }
  return 0;
}