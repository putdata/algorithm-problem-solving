#include <bits/stdc++.h>
using namespace std;

string t,p;
int f[1000005],ans;
queue<int> que;
int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    getline(cin, t); getline(cin, p);
    int tlen = t.length(), plen = p.length();
    for(int i=1, j=0; i<plen; i++) {
        while(j > 0 && p[i] != p[j]) j=f[j-1];
        if(p[i] == p[j]) f[i]=++j;
    }
    for(int i=0, j=0; i<tlen; i++) {
        while(j > 0 && t[i] != p[j]) j=f[j-1];
        if(t[i] == p[j]) {
            if(j == plen - 1) {
                que.push(i-plen+2);
                j=f[j];
                ans++;
            } else j++;
        }
    }
    cout << ans << '\n';
    while(!que.empty()) {
        cout << que.front() << ' ';
        que.pop();
    }
    return 0;
}