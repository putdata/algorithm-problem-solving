#include <bits/stdc++.h>
using namespace std;

int N,M;
char ans[20];
void foo(int y) {
  if (y==M) {
    cout << ans << '\n';
  } else {
    for (int i=1; i<=N; i++) {
      ans[y*2]=i+'0';
      foo(y+1);
    }
  }
}
int main() {
  ios::sync_with_stdio(0); cin.tie(0);
  cin >> N >> M;
  for(int i=0; i<M*2; i++) ans[i]=' ';
  foo(0);
  return 0;
}