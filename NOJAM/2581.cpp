#include <bits/stdc++.h>
using namespace std;

vector<bool> prime(10001,1);
int main() {
    prime[1]=0;
    for(int i=2; i<=100; i++)
        for(int j=i*i; j<=10000; j+=i) prime[j]=0;
    int M,N,ans[2]={99999,0}; cin >> M >> N;
    for(int i=M; i<=N; i++) {
        if(prime[i]) {
            ans[0]=min(ans[0],i);
            ans[1]+=i;
        }
    }
    ans[1]?cout << ans[1] << '\n' << ans[0] : cout << -1;
    return 0;
}