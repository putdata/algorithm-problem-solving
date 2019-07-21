#include <bits/stdc++.h>
using namespace std;

int N;
char t[65][65];
void foo(int x, int y, int len) {
  int b[2]={0,};
  for(int i=x; i<x+len; i++)
    for(int j=y; j<y+len; j++)
      b[t[i][j]-'0']++;
  if(b[0]==len*len) cout << '0';
  else if(b[1]==len*len) cout << '1';
  else {
    cout << '(';
    for(int i=0; i<2; i++)
      for(int j=0; j<2; j++)
        foo(x+(len/2)*i,y+(len/2)*j,len/2);
    cout << ')';
  }
}
int main() {
  ios::sync_with_stdio(0); cin.tie(0);
  cin >> N;
  for(int i=0; i<N; i++) cin >> t[i];
  foo(0,0,N);
  return 0;
}