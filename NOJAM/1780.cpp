#include <bits/stdc++.h>
using namespace std;

int N,p[2187][2187],ans[3];
void foo(int x, int y, int len) {
  int t[3]={0,};
  for(int i=0; i<len; i++)
    for(int j=0; j<len; j++) t[p[x+i][y+j]+1]++;
  if(t[0]==len*len) ans[0]+=t[0]/(len*len);
  else if(t[1]==len*len) ans[1]+=t[1]/(len*len);
  else if(t[2]==len*len) ans[2]+=t[2]/(len*len);
  else {
    for(int i=0; i<3; i++)
      for(int j=0; j<3; j++)
        foo(x+(len/3)*i,y+(len/3)*j,len/3);
  }
}
int main() {
  ios::sync_with_stdio(0); cin.tie(0);
  cin >> N;
  for(int i=0; i<N; i++)
    for(int j=0; j<N; j++) cin >> p[i][j];
  foo(0,0,N);
  cout<<ans[0]<<'\n'<<ans[1]<<'\n'<<ans[2];
  return 0;
}