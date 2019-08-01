#include <bits/stdc++.h>
using namespace std;

int main() {
    int N; cin >> N;
    int arr[N], ans=0;
    for(int i=N-1; i>-1 ;i--) cin >> arr[i];
    for(int i=0; i<N-1; i++)
        if(arr[i+1]>=arr[i]) {
            ans+= arr[i+1]-arr[i]+1;
            arr[i+1]=arr[i]-1;
        }
    cout << ans;
    return 0;
}