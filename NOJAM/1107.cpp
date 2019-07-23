#include <bits/stdc++.h>
using namespace std;

int N,M,ans;
bool can[10];

int main() {
  cin >> N >> M;
  for(int i=0; i<M; i++) {
    int t; cin >> t;
    can[t]=1;
  }
  ans=abs(N-100);
  for(int i=1; i<1000000; i++) {
    bool flag=1;
    int tmp=i,click=0;
    while(tmp) {
      if(can[tmp%10]) {
        flag=0;
        break;
      }
      click++;
      tmp/=10;
    }
    if(flag) ans=min(ans,abs(N-i)+click);
  }
  if(!can[0]) ans=min(ans,abs(N)+1);
  cout << ans;
  return 0;
}