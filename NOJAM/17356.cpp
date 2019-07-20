#include <bits/stdc++.h>
using namespace std;

double N,M;
int main() {
  cin>>N>>M;
  printf("%lf",1/(1+pow(10,(M-N)/400)));
  return 0;
}