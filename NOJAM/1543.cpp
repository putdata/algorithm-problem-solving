#include <bits/stdc++.h>
using namespace std;

string c,cmp;
short f[51];
int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    getline(cin, c);
    getline(cin, cmp);
    int cL = c.length(), cmpL = cmp.length(), ans = 0;
    for(int i=1, j=0; i<cmpL; i++) {
        while(j > 0 && cmp[i] != cmp[j]) j=f[j-1];
        if(cmp[i] == cmp[j]) f[i]=++j;
    }
    for(int i=0, j=0; i<cL; i++) {
        while(j > 0 && c[i] != cmp[j]) j=f[j-1];
        if(c[i] == cmp[j]) {
            if(j == cmpL - 1) {
                ans++;
                j=0;
            } else ++j;
        }
    }
    cout << ans;
    return 0;
}