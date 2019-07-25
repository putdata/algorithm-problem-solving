#include <bits/stdc++.h>
using namespace std;

int N,M,arr[10001],p1,p2,ans;
int main() {
  ios::sync_with_stdio(0); cin.tie(0);
  cin >> N >> M;
  for(int i=1; i<=N; i++) {
    cin >> arr[i];
    arr[i]+=arr[i-1];
  }
  while(p1<=p2 && p2<=N) {
    int pSum=arr[p2]-arr[p1];
    if(pSum==M) {
      ans++;
      p2++;
    }
    else if(pSum<M) p2++;
    else p1++;
  }
  cout << ans;
  return 0;
}