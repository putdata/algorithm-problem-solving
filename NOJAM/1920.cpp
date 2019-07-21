#include <bits/stdc++.h>
using namespace std;

int N,M,a[100001];
int main() {
  ios::sync_with_stdio(0); cin.tie(0);
  cin >> N;
  for(int i=0; i<N; i++) cin >> a[i];
  sort(a,a+N);
  cin >> M;
  while(M--) {
    int t; cin >> t;
    if(binary_search(a,a+N,t)) cout << "1\n";
    else cout << "0\n";
  }
  return 0;
}