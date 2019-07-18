#include <bits/stdc++.h>
using namespace std;

int A,B,m,ten;
void foo(int x) {
  if(x) {
    foo(x/B);
    cout << x%B << ' ';
  }
}
int main() {
  cin >> A >> B >> m;
  while(m--) {
    int t;
    cin >> t;
    ten+=t*pow(A,m); 
  }
  foo(ten);
  return 0;
}