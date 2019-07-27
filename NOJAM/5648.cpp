#include <bits/stdc++.h>
using namespace std;

int N;
vector<long long> vec;
int main() {
  ios::sync_with_stdio(0); cin.tie(0);
  cin >> N;
  for(int i=0; i<N; i++) {
    long long t,newN=0; cin >> t;
    while(t%10==0) t/=10;
    while(t) {
      newN=newN*10+t%10;
      t/=10;
    }
    vec.push_back(newN);
  }
  sort(vec.begin(),vec.end());
  for(int i=0; i<N; i++) {
    cout << vec[i] << '\n';
  }
  return 0;
}