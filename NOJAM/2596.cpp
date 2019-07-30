#include <bits/stdc++.h>
using namespace std;

string prom[8]={"000000","001111","010011","011100","100110","101001","110101","111010"};
int main() {
  int N;
  string s, ans="";
  cin >> N >> s;
  for(int i=0; i<N; i++) {
    for(int k=0; k<8; k++) {
      int mis=0;
      for(int j=0; j<6; j++)
        if(s[i*6 + j] != prom[k][j]) mis++;

      if(mis < 2) {
        ans += k+'A';
        break;
      }
      if(k == 7) {
        cout << i+1;
        return 0;
      }
    }
  }
  cout << ans;
  return 0;
}