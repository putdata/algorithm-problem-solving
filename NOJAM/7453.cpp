#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, ans=0; cin >> n;
    int a[n],b[n],c[n],d[n];
    for(int i=0; i<n; i++) cin >> a[i] >> b[i] >> c[i] >> d[i];
    vector<int> sep1,sep2;
    for(int i=0; i<n; i++) {
        for(int j=0; j<n; j++) {
            sep1.push_back(a[i]+b[j]);
            sep2.push_back(c[i]+d[j]);
        }
    }
    sort(sep2.begin(),sep2.end());
    for(int val : sep1) {
        ans+=upper_bound(sep2.begin(),sep2.end(),-val)-lower_bound(sep2.begin(),sep2.end(),-val);
    }
    cout << ans;
    return 0;
}