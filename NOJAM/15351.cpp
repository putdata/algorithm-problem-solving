#include <bits/stdc++.h>
using namespace std;

int N;
int main() {
  ios::sync_with_stdio(0); cin.tie(0);
  cin >> N;
  cin.ignore();
  while(N--) {
    int point=0;
    string s;
    getline(cin, s);
    for(int i=0; i<s.length(); i++) {
      if(s[i]!=' ') point+=s[i]-'A'+1;
    }
    point==100? cout<<"PERFECT LIFE":cout<<point; cout<<'\n';
  }
  return 0;
}