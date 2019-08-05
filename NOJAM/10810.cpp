#include <bits/stdc++.h>
using namespace std;

int main() {
    int N,M; cin >> N >> M;
    int a[101]={};
    while(M--) {
        int I,J,K; cin >> I >> J >> K;
        for(int i=I; i<=J; i++) a[i]=K;
    }
    for(int i=1; i<=N; i++) cout << a[i] << ' ';
    return 0;
}