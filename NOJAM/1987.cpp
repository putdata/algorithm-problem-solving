#include <bits/stdc++.h>
using namespace std;

int R,C,dX[4]={1,0,0,-1},dY[4]={0,1,-1,0},ans;
char s[22][22];
bool vis[26];
void foo(int x, int y, int len) {
    if(len > ans) ans = len;
    for(int i=0; i<4; i++) {
        int nX=x+dX[i], nY=y+dY[i];
        if((0 < nX && nX <= R) && (0 < nY && nY <= C) && !vis[s[nX][nY]-'A']) {
            vis[s[nX][nY]-'A']=1;
            foo(nX,nY,len+1);
            vis[s[nX][nY]-'A']=0;
        }
    }
}

int main() {
    cin >> R >> C;
    for(int i=1; i<=R; i++) {
        for(int j=1; j<=C; j++)
            cin >> s[i][j];
    }
    vis[s[1][1]-'A']=1;
    foo(1,1,1);
    cout << ans;
    return 0;
}