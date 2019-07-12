#include <bits/stdc++.h>
using namespace std;

int L,C;
char s[16];
void foo(int x, string str, int vo, int co) {
  if (str.length() == L) {
    if(vo>0 && co>1) cout << str << "\n";
    return;
  }
  for(int i=x; i<C; i++) {
    if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u')
      foo(i+1,str+s[i],vo+1,co);
    else foo(i+1,str+s[i],vo,co+1);
  }
}
int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  cin >> L >> C;
  for(int i=0; i<C; i++) cin >> s[i];
  sort(s,s+C);
  foo(0,"",0,0);
  return 0;
}