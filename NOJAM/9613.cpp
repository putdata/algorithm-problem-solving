#include <bits/stdc++.h>
using namespace std;

int T;
int foo(int x, int y) {
  if(x%y==0) return y;
  return foo(y,x%y);
}
int main() {
  ios::sync_with_stdio(0); cin.tie(0);
  cin >> T;
  while(T--) {
    int n,arr[101];
    long long ans=0;
    cin >> n;
    for(int i=0; i<n; i++) cin >> arr[i];
    for(int i=0; i<n; i++)
      for(int j=i+1; j<n; j++) ans+=foo(arr[i],arr[j]);
    cout << ans << '\n';
  }
  return 0;
}