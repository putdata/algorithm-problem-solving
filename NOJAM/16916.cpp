#include <bits/stdc++.h>
using namespace std;

int f[1000001];
int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    string a,b; cin >> a >> b;
    int aS=a.size(), bS=b.size();
    for(int i=1, j=0; i<bS; i++) {
        while(j>0 && b[i] != b[j]) j=f[j-1];
        if(b[i] == b[j]) f[i]=++j;
    }
    for(int i=0, j=0; i<aS; i++) {
        while(j>0 && a[i] != b[j]) j=f[j-1];
        if(a[i] == b[j]) {
            if(j==bS-1) {
                cout << 1;
                return 0;
            } else ++j;
        }
    }
    cout << 0;
    return 0;
}