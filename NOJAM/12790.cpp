#include <bits/stdc++.h>
using namespace std;

int main() {
    int T; cin >> T;
    while(T--) {
        int a,b,c,d,ca,cb,cc,cd;
        cin >> a >> b >> c >> d >> ca >> cb >> cc >> cd;
        cout << max(1,a+ca) + 5*max(1,b+cb) + 2*max(0,c+cc) + 2*(d+cd) << '\n';
    }
    return 0;
}