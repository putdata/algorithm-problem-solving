#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    int T; cin >> T;
    for(int i=1; i<=T; i++) {
        int len; cin >> len;
        string s,ans=""; cin >> s;
        for(int i=0; i<len; i++) {
            bitset<8> bit;
            bit.reset();
            for(int j=0; j<8; j++) {
                if(s[i*8+j]=='I') bit.set(7-j);
            }
            ans.push_back(bit.to_ulong());
        }
        cout << "Case #" << i << ": " << ans << '\n';
    }
    return 0;
}