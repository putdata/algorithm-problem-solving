#include <bits/stdc++.h>
using namespace std;

long long N,K,high,low=1,mid,arr[10001];
int main() {
  cin >> K >> N;
  for(int i=0; i<K; i++) {
    cin >> arr[i];
    if(arr[i]>high) high=arr[i];
  }
  while(low<=high) {
    int cnt=0;
    mid=(low+high)/2;
    for(int i=0; i<K; i++) cnt+=arr[i]/mid;
    if(cnt<N) high=mid-1;
    else low=mid+1;
  }
  cout << high;
  return 0;
}