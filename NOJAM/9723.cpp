#include <bits/stdc++.h>
using namespace std;

int main() {
    int T; cin >> T;
    for(int i=1; i<=T; i++) {
        int in[3];
        cin >> in[0] >> in[1] >> in[2];
        sort(in,in+3,greater<int>());
        auto [c,a,b]=in;
        cout << "Case #" << i << ": " << (c*c==a*a+b*b?"YES\n":"NO\n");
    }
    return 0;
}