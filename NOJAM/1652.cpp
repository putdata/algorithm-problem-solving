#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;
    int awid=0, ahei=0;
    string m[n];
    for(int i=0; i<n; i++) cin >> m[i];
    for(int i=0; i<n; i++) {
        int wid=0,hei=0;
        for(int j=0; j<n; j++) {
            if(m[i][j]=='.') wid++;
            else {
                if(wid>1) awid++;
                wid=0;
            }
            if(m[j][i]=='.') hei++;
            else {
                if(hei>1) ahei++;
                hei=0;
            }
        }
        if(wid>1) awid++;
        if(hei>1) ahei++;
    }
    cout << awid << ' ' << ahei;
    return 0;
}