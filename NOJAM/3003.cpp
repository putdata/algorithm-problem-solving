#include <bits/stdc++.h>
using namespace std;

int a,b[6]={1,1,2,2,2,8};
int main() {
  for(int i=0; i<6; i++) {
    cin >> a;
    cout << b[i]-a << ' ';
  }
  return 0;
}