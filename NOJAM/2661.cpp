#include <bits/stdc++.h>
using namespace std;

int N;
char s[81];
bool foo(int x) {
  for(int i=2; i<=x; i+=2) {
    if (equal(s+x-i/2, s+x, s+x-i)) return 0;
  }
  if(x==N) {
    printf("%s",s);
    return 1;
  }
  for(int i=1; i<4; i++) {
    s[x]=i+'0';
    if(foo(x+1)==1) return 1;
    s[x]=0;
  }
  return 0;
}

int main() {
  scanf("%d",&N);
  foo(0);
  return 0;
}