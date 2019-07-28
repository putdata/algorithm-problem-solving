#include <bits/stdc++.h>
using namespace std;

int main() {
  int S1,S2;
  cin >> S1 >> S2;
  while(S1--) {
    int a,b;
    cin >> a >> b;
    if(a!=b) {
      cout << "Wrong Answer";
      return 0;
    }
  }
  while(S2--) {
    int a,b;
    cin >> a >> b;
    if(a!=b) {
      cout << "Why Wrong!!!";
      return 0;
    }
  }
  cout << "Accepted";
  return 0;
}