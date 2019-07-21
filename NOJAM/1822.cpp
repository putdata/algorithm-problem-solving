#include <bits/stdc++.h>
using namespace std;

int N,M,a[500001],ans;
bool chk[500001];
int main() {
  ios::sync_with_stdio(0); cin.tie(0);
  cin >> N >> M;
  for(int i=0; i<N; i++) cin >> a[i];
  sort(a,a+N);
  ans=N;
  while(M--) {
    int t; cin >> t;
    int pos=lower_bound(a,a+N,t)-a;
    if(a[pos]==t) {
      ans--;
      chk[pos]=1;
    }
  }
  cout << ans << '\n';
  if(ans) {
    for(int i=0; i<N; i++)
      if(!chk[i]) cout << a[i] << ' ';
  }
  return 0;
}