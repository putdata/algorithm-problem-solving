#include <bits/stdc++.h>
using namespace std;

int N,arr[10][10],ans=1e9;
bool visit[10]={1,};
void foo(int cur,int cost, int x) {
  if(x==N) {
    if(arr[cur][0]) ans=min(ans,cost+arr[cur][0]);
    return;
  }
  for(int i=0; i<N; i++) {
    if(visit[i] || !arr[cur][i]) continue;
    visit[i]=1;
    foo(i,cost+arr[cur][i],x+1);
    visit[i]=0;
  }
}
int main() {
  cin >> N;
  for(int i=0; i<N; i++)
    for(int j=0; j<N; j++)
      cin >> arr[i][j];
  foo(0,0,1);
  cout << ans;
  return 0;
}