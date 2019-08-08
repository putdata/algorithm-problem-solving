#include <bits/stdc++.h>
using namespace std;

int n,m,a[1002][1002],dX[4]={1,0,0,-1},dY[4]={0,1,-1,0};
bool vis[1002][1002];
int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    cin >> n >> m;
    int sX,sY;
    for(int i=1; i<=n; i++) {
        for(int j=1; j<=m; j++) {
            cin >> a[i][j];
            if(a[i][j]==2) sX=i,sY=j;
        }
    }
    queue<tuple<int,int,int>> q;
    q.push({sX,sY,0}); a[sX][sY]=0;
    while(!q.empty()) {
        auto [x,y,p] = q.front();
        q.pop();
        for(int i=0; i<4; i++) {
            int nX=x+dX[i];
            int nY=y+dY[i];
            if(!vis[nX][nY] && a[nX][nY]) {
                a[nX][nY]=p+1;
                vis[nX][nY]=1;
                q.push({nX,nY,p+1});
            }
        }
    }
    for(int i=1; i<=n; i++) {
        string s="";
        for(int j=1; j<=m; j++) {
            if(!vis[i][j] && a[i][j]==1)
                a[i][j]=-1;
            s+=to_string(a[i][j]) + ' ';
        }
        cout << s << '\n';
    }
    return 0;
}