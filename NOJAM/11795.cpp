#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    int T; cin >> T;
    int set[3]={};
    while(T--) {
        int a,b,c; cin >> a >> b >> c;
        set[0]+=a; set[1]+=b; set[2]+=c;
        int pack=min({set[0],set[1],set[2]});
        if(pack<30) cout << "NO\n";
        else {
            cout << pack << '\n';
            set[0]-=pack;set[1]-=pack;set[2]-=pack;
        }
    }
    return 0;
}