#include <bits/stdc++.h>
using namespace std;

int N,cnt;
long long a[1000000],last,m[2];
int main() {
  ios::sync_with_stdio(0); cin.tie(0);
  cin >> N;
  for(int i=0; i<N; i++) cin >> a[i];
  sort(a,a+N);
  cnt=m[0]=1, last=m[1]=a[0];
  for(int i=1; i<N; i++) {
    if(a[i]==last) {
      cnt++;
      if(cnt>m[0]) m[0]=cnt, m[1]=a[i];
    } else {
      cnt=1;
      last=a[i];
    }
  }
  cout << m[1];
  return 0;
}