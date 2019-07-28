#include <bits/stdc++.h>
using namespace std;

int D[]={0,31,59,90,120,151,181,212,243,273,304,334,365};
string S[]={"Thursday","Friday","Saturday","Sunday","Monday","Tuesday","Wednesday"};
int main() {
  int d,m;
  cin >> d >> m;
  cout << S[(D[m-1]+d-1)%7];
  return 0;
}