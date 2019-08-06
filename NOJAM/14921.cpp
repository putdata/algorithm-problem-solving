#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    int N; cin >> N;
    int a[N],ans=2e9+10;
    for(int i=0; i<N; i++) cin >> a[i];
    int l=0, r=N-1;
    while(l<r) {
        int mix=a[l]+a[r];
        mix < 0 ? l++ : r--;
        if(abs(mix) < abs(ans)) ans = mix;
    }
    cout << ans;
    return 0;
}