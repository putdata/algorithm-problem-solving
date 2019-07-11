#include <bits/stdc++.h>
using namespace std;

int n;
bool c[3073][6145];
void foo(int x, int y, int h) {
  if(h==3) {
    c[x][y]=1;
    c[x+1][y-1]=c[x+1][y+1]=1;
    for(int i=0; i<5; i++) c[x+2][y+i-2]=1;
  } else {
    foo(x,y,h/2);
    foo(x+h/2,y-h/2,h/2);
    foo(x+h/2,y+h/2,h/2);
  }
}
int main() {
  scanf("%d",&n);
  foo(0,n,n);
  for(int i=0; i<n; i++) {
    for(int j=1; j<=n*2; j++)
      printf("%c",c[i][j]?'*':' ');
    printf("\n");
  }
  return 0;
}