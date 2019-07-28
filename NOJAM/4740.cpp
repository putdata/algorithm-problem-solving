#include <bits/stdc++.h>
using namespace std;

int main() {
  while(1) {
    string s;
    getline(cin, s);
    if(s=="***") break;
    reverse(s.begin(),s.end());
    cout << s << '\n';
  }
  return 0;
}