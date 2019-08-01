#include <bits/stdc++.h>
using namespace std;

int main() {
    int N,M;
    scanf("%d%d",&N,&M);
    int arr[N][M];
    for(int i=0; i<N; i++) {
        for(int j=0; j<M; j++) scanf("%1d",arr[i]+j);
        for(int j=M-1; j>-1; j--) printf("%d",arr[i][j]);
        puts("");
    }
    return 0;
}