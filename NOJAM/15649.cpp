#include <bits/stdc++.h>
using namespace std;

int n,m,arr[10],visit[10];
void foo(int x) {
  if(x==m) {
    for(int i=0; i<m; i++) cout << arr[i] << " ";
    cout << "\n";
  } else {
    for(int i=1; i<=n; i++) {
      if(visit[i]) continue;
      arr[x]=i;
      visit[i]=1;
      foo(x+1);
      visit[i]=0;
    }
  }
}
int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  cin >> n >> m;
  foo(0);
  return 0;
}