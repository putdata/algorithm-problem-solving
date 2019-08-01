#include <bits/stdc++.h>
using namespace std;

int N,M,K,ans,dirX[4]={1,0,0,-1},dirY[4]={0,1,-1,0};
bool m[102][102];
queue<pair<int,int>> que;
int main() {
    cin >> N >> M >> K;
    while(K--) {
        int a, b;
        cin >> a >> b;
        m[a][b]=1;
        que.push({a,b});
    }
    while(!que.empty()) {
        auto [i,j] = que.front();
        que.pop();
        if(!m[i][j]) continue;
        queue<pair<int,int>> tmpQ;
        tmpQ.push({i,j});
        m[i][j]=0;
        int potAns=1;
        while(!tmpQ.empty()) {
            auto [x,y] = tmpQ.front();
            tmpQ.pop();
            for(int k=0; k<4; k++) {
                int tX=x+dirX[k], tY=y+dirY[k];
                if(m[tX][tY]) {
                    m[tX][tY]=0;
                    potAns++;
                    tmpQ.push({tX,tY});
                }
            }
        }
        ans=max(ans,potAns);
    }
    cout << ans;
    return 0;
}