#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    int n; cin >> n;
    int a[n],ans=2e9+1,save[2];
    for(int i=0; i<n; i++) cin >> a[i];
    int l=0, r=n-1;
    while(l<r) {
        int sum=a[l]+a[r];
        if(abs(sum)<ans) {
            ans=abs(sum);
            save[0]=a[l];
            save[1]=a[r];
        }
        sum>0?r--:l++;
    }
    cout << save[0] << ' ' << save[1];
    return 0;
}