#include <bits/stdc++.h>
using namespace std;

vector<string> vec;
string s;
int main() {
  cin >> s;
  for(int i=0; i<s.length(); i++) {
    vec.push_back(s.substr(i));
  }
  sort(vec.begin(),vec.end());
  for(auto it=vec.begin(); it!=vec.end(); it++)
    cout << *(it) << '\n';
  return 0;
}