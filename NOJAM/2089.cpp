#include <bits/stdc++.h>
using namespace std;

int N;
void foo(int x) {
  if(x<0) {
    foo((x-1)/-2);
    cout << (-x)%2;
  } else if(x>0) {
    foo(x/-2);
    cout << x%2;
  }
}
int main() {
  ios::sync_with_stdio(0); cin.tie(0);
  cin >> N;
  if(N==0) cout << 0;
  else foo(N);
  return 0;
}