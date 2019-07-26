#include <bits/stdc++.h>
using namespace std;

int N,I;
string s[101];
int main() {
  cin >> N >> I;
  for(int i=0; i<N; i++) cin >> s[i];
  sort(s,s+N);
  cout << s[I-1];
  return 0;
}