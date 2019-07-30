#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);
  int N,M,a[100001];
  cin >> N;
  for(int i=1; i<=N; i++) {
    cin >> a[i];
    a[i]+=a[i-1];
  }
  cin >> M;
  while(M--) {
    int st,en;
    cin >> st >> en;
    cout << a[en]-a[st-1] << '\n';
  }
  return 0;
}