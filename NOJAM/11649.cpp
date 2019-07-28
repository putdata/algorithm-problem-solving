#include <bits/stdc++.h>
using namespace std;

int N;
vector<string> vec;
int main() {
  ios::sync_with_stdio(0); cin.tie(0);
  cin >> N;
  for(int i=0; i<N; i++) {
    string s;
    cin >> s;
    reverse(s.begin(),s.end());
    vec.push_back(s);
  }
  sort(vec.begin(),vec.end());
  for(int i=0; i<N; i++)
    cout << vec[i] << '\n';
  return 0;
}