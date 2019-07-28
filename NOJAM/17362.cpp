#include <bits/stdc++.h>
using namespace std;

int N;
int main() {
  cin >> N;
  N-=((N-1)/8)*8;
  N<5?cout<<N:cout<<10-N;
  return 0;
}