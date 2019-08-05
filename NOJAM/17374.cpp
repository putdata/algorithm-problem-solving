#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    int T; cin >> T;
    while(T--) {
        int p,q,a,b,c,d;
        cin >> p >> q >> a >> b >> c >> d;
        int coin=(q/c)*d,ans=0;
        p+=(coin/b)*a;
        coin-=(coin/b)*b;
        int l=0, r=p/a;
        ans=min(p,coin);
        while(l<=r) {
            int mid = (l+r)/2;
            int BC = min(p-mid*a,coin+mid*b);
            if(p-mid*a > coin+mid*b) l=mid+1;
            else r=mid-1;
            ans=max(BC,ans);
        }
        cout << ans << '\n';
    }
    return 0;
}