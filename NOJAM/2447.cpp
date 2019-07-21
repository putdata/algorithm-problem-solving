#include <bits/stdc++.h>
using namespace std;

int N,a[6561][6561];
void foo(int x, int y, int l) {
  if(l==3) {
    a[x][y]=a[x][y+1]=a[x][y+2]='*';
    a[x+1][y]=a[x+1][y+2]='*';
    a[x+2][y]=a[x+2][y+1]=a[x+2][y+2]='*';
    return;
  }
  for(int i=0; i<3; i++) foo(x,y+(l/3)*i,l/3);
  foo(x+(l/3),y,l/3); foo(x+(l/3),y+(l/3)*2,l/3);
  for(int i=0; i<3; i++) foo(x+(l/3)*2,y+(l/3)*i,l/3);
}
int main() {
  ios::sync_with_stdio(0); cin.tie(0);
  cin >> N;
  foo(0,0,N);
  for(int i=0; i<N; i++) {
    for(int j=0; j<N; j++) {
      if(a[i][j]=='*') cout << '*';
      else cout << ' ';
    }
    cout << '\n';
  }
  return 0;
}