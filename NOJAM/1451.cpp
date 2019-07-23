#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int N,M;
ll rec[101][101],ans=-1e9;
ll foo(int x1, int y1, int x2, int y2) {
  return rec[x2][y2]-rec[x1][y2]-rec[x2][y1]+rec[x1][y1];
}
int main() {
  scanf("%d%d",&N,&M);
  for(int i=1; i<=N; i++) {
    for(int j=1; j<=M; j++) {
      scanf("%1lld",&rec[i][j]);
      rec[i][j]+=rec[i-1][j]+rec[i][j-1]-rec[i-1][j-1];
    }
  }
  for(int i=1; i<=N; i++) {
    for(int j=1; j<=M; j++) {
      vector<ll> vec(5);
      vec.push_back(ans);
      vec.push_back(rec[i][j]*foo(0,j,i,M)*foo(i,0,N,M));
      vec.push_back(rec[i][M]*foo(i,0,N,j)*foo(i,j,N,M));
      vec.push_back(rec[i][j]*foo(i,0,N,j)*foo(0,j,N,M));
      vec.push_back(rec[N][j]*foo(0,j,i,M)*foo(i,j,N,M));
      ans=*max_element(vec.begin(),vec.end());
    }
    for(int j=i+1; j<N; j++) {
      ans=max(ans,rec[i][M]*foo(i,0,j,M)*foo(j,0,N,M));
    }
  }
  for(int i=1; i<=M; i++) {
    for(int j=i+1; j<M; j++)
      ans=max(ans,rec[N][i]*foo(0,i,N,j)*foo(0,j,N,M));
  }
  cout << ans;
  return 0;
}