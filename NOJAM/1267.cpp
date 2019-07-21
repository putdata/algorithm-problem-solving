#include <bits/stdc++.h>
using namespace std;

int N,ans,y,m;
int main() {
  cin >> N;
  for(int i=0; i<N; i++) {
    int a; cin >> a;
    y+=(a/30+1)*10; m+=(a/60+1)*15;
  }
  if(y==m) printf("Y M %d",y);
  else if(y<m) printf("Y %d",y);
  else printf("M %d",m);
  return 0;
}