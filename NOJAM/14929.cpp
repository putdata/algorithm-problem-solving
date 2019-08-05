#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    int n; cin >> n;
    int arr[n+1];
    long long ans=0;
    for(int i=1; i<=n; i++) {
        cin >> arr[i];
        arr[i]+=arr[i-1];
    }
    for(int i=1; i<n; i++) {
        ans+=(arr[i]-arr[i-1])*(arr[n]-arr[i]);
    }
    cout << ans;
    return 0;
}