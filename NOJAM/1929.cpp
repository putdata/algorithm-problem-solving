#include <bits/stdc++.h>
using namespace std;

int M,N;
bool c[1000001]={1,1};
int main() {
  cin >> M >> N;
  for(int i=2; i*i<=N; i++) {
    if(c[i]) continue;
    for(int j=i*2; j<=N; j+=i) c[j]=1;
  }
  for(int i=M; i<=N; i++)
    if(!c[i]) printf("%d\n",i);
  return 0;
}