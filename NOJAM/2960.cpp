#include <bits/stdc++.h>
using namespace std;

int main() {
    int N,K,cnt=0; cin >> N >> K;
    bool chk[1001]={};
    for(int i=2; i<=N; i++) {
        for(int j=i; j<=N; j+=i) {
            if(chk[j]) continue;
            chk[j]=1;
            cnt++;
            if(cnt==K) {
                cout << j;
                return 0;
            }
        }
    }
    return 0;
}