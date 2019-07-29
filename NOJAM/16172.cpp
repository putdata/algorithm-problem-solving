#include <bits/stdc++.h>
using namespace std;

int f[200001];
int main() {
  string s,k,delN;
  cin >> s >> k;
  for(char i : s) {
    if(i > '9') delN+=i;
  }
  for(int i=1, j=0; i<delN.length(); i++) {
    while(j>0 && delN[i] != delN[j]) j=f[j-1];
    if(delN[i] == delN[j]) f[i]=++j;
  }
  for(int i=0, j=0; i<delN.length(); i++) {
    while(j>0 && delN[i] != k[j]) j=f[j-1];
    if(delN[i] == k[j]) {
      if(j == k.length() - 1) {
        cout << 1;
        return 0;
      } else ++j;
    }
  }
  cout << 0;
  return 0;
}