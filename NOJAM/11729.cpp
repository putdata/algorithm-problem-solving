#include <bits/stdc++.h>
using namespace std;

int N;
void foo(int k, int x, int y) {
  if(k==1) {
    cout << x << ' ' << y << '\n';
    return;
  }
  foo(k-1,x,6-x-y);
  cout << x << ' ' << y << '\n';
  foo(k-1,6-x-y,y);
}
int main() {
  ios::sync_with_stdio(0); cin.tie(0);
  cin >> N;
  cout << (1<<N)-1 << '\n';
  foo(N,1,3);
  return 0;
}