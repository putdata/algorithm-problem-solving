#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    int T; cin >> T;
    while(T--) {
        int a; cin >> a;
        int i=0;
        while(a) {
            if(a%2) cout << i << ' ';
            a/=2;
            i++;
        }
        cout << '\n';
    }
    return 0;
}