#include <bits/stdc++.h>
using namespace std;

int N,K,s[2][7],ans;
int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    cin >> N >> K;
    while(N--) {
        int a,b;
        cin >> a >> b;
        s[a][b]++;
    }
    for(int i=1; i<7; i++) ans+=(s[0][i]+K-1)/K + (s[1][i]+K-1)/K;
    cout << ans;
    return 0;
}