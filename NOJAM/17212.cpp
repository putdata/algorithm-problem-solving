#include <bits/stdc++.h>
using namespace std;

int N,dp[100010],can[4]={1,2,5,7};
int main() {
    cin >> N;
    fill(dp+1,dp+N+10,999999);
    for(int i=0; i<N; i++) {
        for(int j=0; j<4; j++)
            dp[i+can[j]]=min(dp[i+can[j]],dp[i]+1);
    }
    cout << dp[N];
    return 0;
}