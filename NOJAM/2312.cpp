#include <bits/stdc++.h>
using namespace std;

int main() {
    int T; cin >> T;
    while(T--) {
        int a; cin >> a;
        for(int i=2; i<=a; i++) {
            short cnt=0;
            while(a%i==0) {
                cnt++;
                a/=i;
            }
            if(cnt) cout << i << ' ' << cnt << '\n';
        }
    }
    return 0;
}