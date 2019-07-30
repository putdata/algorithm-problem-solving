#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);
  int N,M,sol[100],ans[2]={-1,99999999};
  cin >> N >> M;
  for(int i=0; i<N; i++) cin >> sol[i];
  while(M--) {
    int idx,tot=0;
    char a;
    cin >> idx;
    for(int i=0; i<N; i++) {
      cin >> a;
      if(a=='O') tot+=sol[i];
    }
    if(tot>ans[0]) ans[0]=tot,ans[1]=idx;
    else if(tot==ans[0]) ans[1]=min(ans[1],idx);
  }
  cout << ans[1] << ' ' << ans[0];
  return 0;
}