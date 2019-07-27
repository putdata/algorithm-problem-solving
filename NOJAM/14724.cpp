#include <bits/stdc++.h>
using namespace std;

int N;
string s[9]={"PROBRAIN","GROW","ARGOS","ADMIN","ANT","MOTION","SPG","COMON","ALMIGHTY"};
pair<int,string> p[9];
int main() {
  cin >> N;
  for(int i=0; i<9; i++) {
    int arr[101];
    for(int j=0; j<N; j++) cin >> arr[j];
    sort(arr,arr+N,greater<int>());
    p[i]={arr[0],s[i]};
  }
  sort(p,p+9);
  cout << p[8].second;
  return 0;
}