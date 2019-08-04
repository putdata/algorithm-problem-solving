#include <bits/stdc++.h>
using namespace std;

int main() {
    int N,M; cin >> N >> M;
    int arr[N], ans=0;
    for(int i=0; i<N; i++) cin >> arr[i];
    for(int i=0; i<N; i++) {
        for(int j=i+1; j<N; j++) {
            for(int k=j+1; k<N; k++) {
                int sum=arr[i]+arr[j]+arr[k];
                if(sum<=M && sum>ans) ans=sum;
            }
        }
    }
    cout << ans;
    return 0;
}