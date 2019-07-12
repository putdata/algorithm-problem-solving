#include <bits/stdc++.h>
using namespace std;

int N,M;
int arr[10],ans[10];
void foo(int x, int y) {
  if (y==M) {
    for(int i=0; i<M; i++) cout << ans[i] << ' ';
    cout << '\n';
  } else {
    for (int i=x; i<N; i++) {
      ans[y]=arr[i];
      foo(i+1,y+1);
    }
  }
}
int main() {
  ios::sync_with_stdio(0); cin.tie(0);
  cin >> N >> M;
  for(int i=0; i<N; i++) cin >> arr[i];
  sort(arr, arr+N);
  foo(0,0);
  return 0;
}