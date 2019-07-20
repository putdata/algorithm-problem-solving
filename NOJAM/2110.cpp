#include <bits/stdc++.h>
using namespace std;

int N,C,x[200001],l=1,r,ans;
int main() {
  ios::sync_with_stdio(0); cin.tie(0);
  cin >> N >> C;
  for(int i=0; i<N; i++) cin >> x[i];
  sort(x,x+N); r=x[N-1]-x[0];
  while(l<=r) {
    int mid=(l+r)/2,cnt=1,pos=0;
    for(int i=1; i<N; i++) {
      if(x[i]-x[pos]>=mid) {
        cnt++;
        pos=i;
        if(cnt==C) break;
      }
    }
    if(cnt==C) {
      ans=mid;
      l=mid+1;
    } else r=mid-1;
  }
  cout << ans;
  return 0;
}