#include <bits/stdc++.h>
using namespace std;

unsigned int N,M,arr[1000000],low,mid,high;
int main() {
  ios::sync_with_stdio(0); cin.tie(0);
  cin >> N >> M;
  for(int i=0; i<N; i++) {
    cin >> arr[i];
    high=max(arr[i],high);
  }
  while(low<=high) {
    long long cnt=0;
    mid=(low+high)/2;
    for(int i=0; i<N; i++) cnt+=max((int)(arr[i]-mid),0);
    if(cnt<M) high=mid-1;
    else low=mid+1;
  }
  cout << high;
  return 0;
}