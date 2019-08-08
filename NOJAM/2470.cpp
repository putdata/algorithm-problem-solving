#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    int N; cin >> N;
    int a[N],ans=2e9+10,save1,save2;
    for(int i=0; i<N; i++) cin >> a[i];
    sort(a,a+N);
    int l=0, r=N-1;
    while(l<r) {
        int mix=a[l]+a[r];
        if(abs(mix) < abs(ans)) {
            ans = mix;
            save1=a[l];
            save2=a[r];
        }
        mix < 0 ? l++ : r--;
    }
    cout << save1 << ' ' << save2;
    return 0;
}