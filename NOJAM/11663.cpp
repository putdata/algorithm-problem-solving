#include <bits/stdc++.h>
using namespace std;

int N,M,arr[100001];
int main() {
  ios::sync_with_stdio(0); cin.tie(0);
  cin >> N >> M;
  for(int i=0; i<N; i++) cin >> arr[i];
  sort(arr,arr+N);
  while(M--) {
    int a,b;
    cin >> a >> b;
    cout << upper_bound(arr,arr+N,b)-lower_bound(arr,arr+N,a) << '\n';
  }
  return 0;
}