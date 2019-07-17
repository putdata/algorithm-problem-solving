#include <bits/stdc++.h>
using namespace std;

int N,K,cur;
vector<int> vec;
int main() {
  ios::sync_with_stdio(0); cin.tie(0);
  cin >> N >> K;
  vec.resize(N);
  cout << '<';
  for(int i=0; i<N; i++) vec[i]=i+1;
  while(vec.size()>1) {
    cur+=K-1;
    if(cur>=vec.size()) cur%=vec.size();
    cout << vec[cur] << ", ";
    vec.erase(vec.begin()+cur);
  }
  cout << vec[0] << '>';
  return 0;
}