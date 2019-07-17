#include <bits/stdc++.h>
using namespace std;

string s;
int main() {
  cin >> s;
  s= "00" + s;
  int len=s.length();
  for(int i=len%3; i<len; i+=3) {
    int o=0;
    if(s[i]-'0') o+=4;
    if(s[i+1]-'0') o+=2;
    if(s[i+2]-'0') o+=1;
    cout << o;
  }
  return 0;
}