#include <bits/stdc++.h>
using namespace std;

int N,ans,place[15];
bool bar(int x) {
  for(int i=0; i<x; i++) {
    if(place[x]==place[i] || abs(place[x]-place[i])==(x-i))
      return false;
  }
  return true;
}
void foo(int x) {
  if (x==N) ans++;
  else {
    for(int y=0; y<N; y++) {
      place[x]=y;
      if (bar(x)) foo(x+1);
    }
  }
}
int main() {
  scanf("%d",&N);
  foo(0);
  printf("%d",ans);
  return 0;
}