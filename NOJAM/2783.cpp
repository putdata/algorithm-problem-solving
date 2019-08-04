#include <bits/stdc++.h>
using namespace std;

int main() {
    double a,b,ans; cin >> a >> b;
    ans=a/b*1000;
    int t; cin >> t;
    while(t--) {
        double o1,o2;
        cin >> o1 >> o2;
        ans=min(ans,o1/o2*1000);
    }
    cout << fixed;
    cout.precision(2);
    cout << ans;
    return 0;
}