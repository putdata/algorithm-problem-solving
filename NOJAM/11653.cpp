#include <bits/stdc++.h>
using namespace std;

int N,i=2;
int main() {
  ios::sync_with_stdio(0); cin.tie(0);
  cin >> N;
  while(N!=1) {
    if(N%i==0) {
      cout << i << '\n';
      N/=i;
    } else i++;
  }
  return 0;
}