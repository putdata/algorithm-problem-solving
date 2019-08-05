#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    int N; cin >> N;
    int a[N],ans=0;
    for(int i=0; i<N; i++) cin >> a[i];
    sort(a,a+N);
    for(int i=0; i<N; i++) {
        int l=0, r=N-1;
        while(l<r) {
            if(l==i) l++;
            else if(r==i) r--;
            else if(a[l]+a[r]==a[i]) {ans++; break;}
            else if(a[l]+a[r]<a[i]) l++;
            else r--;
        }
    }
    cout << ans;
    return 0;
}