#include <bits/stdc++.h>
using namespace std;

int N,M;
char ans[20];
void foo(int x, int y) {
  if (y==M) {
    puts(ans);
  } else {
    for (int i=x; i<=N; i++) {
      ans[y*2]=i+'0';
      foo(i+1,y+1);
    }
  }
}
int main() {
  ios::sync_with_stdio(0); cin.tie(0);
  cin >> N >> M;
  for(int i=0; i<M*2; i++) ans[i]=' ';
  foo(1,0);
  return 0;
}