#include <bits/stdc++.h>
using namespace std;

int n,k;
vector<int> vec;
int main() {
  cin >> n >> k;
  for(int i=1; i<=n; i++)
    if(n%i==0) vec.push_back(i);
  sort(vec.begin(),vec.end());
  cout << (k>vec.size()?0:vec[k-1]);
  return 0;
}