#include <bits/stdc++.h>
using namespace std;

int main() {
  while(1) {
    int sum=0;
    string s;
    getline(cin, s);
    if(s=="#") break;
    for(int i=0; i<s.length(); i++) {
      if(s[i] == ' ') continue;
      sum+=(i+1) * (s[i]-'A'+1);
    }
    cout << sum << '\n';
  }
  return 0;
}