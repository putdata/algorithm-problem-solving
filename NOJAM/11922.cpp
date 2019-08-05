#include <bits/stdc++.h>
using namespace std;

map<char,int> d,nd;
int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    int N,ans=0;
    char D; cin >> N >> D;
    d['A']=11;d['K']=4;d['Q']=3;d['J']=20;d['T']=10;d['9']=14;d['8']=0;d['7']=0;
    nd['A']=11;nd['K']=4;nd['Q']=3;nd['J']=2;nd['T']=10;nd['9']=0;nd['8']=0;nd['7']=0;
    for(int i=0; i<4*N; i++) {
        string s; cin >> s;
        if(s[1]==D) ans+=d[s[0]];
        else ans+=nd[s[0]];
    }
    cout << ans;
    return 0;
}