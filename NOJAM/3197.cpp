#include <bits/stdc++.h>
using namespace std;

int R,C,sw[2][2],dirX[4]={1,0,0,-1},dirY[4]={0,1,-1,0};
int paze[1502][1502], now;
char m[1502][1502];
bool v[1502][1502];
queue<pair<int,int> > q;
priority_queue<pair<int,pair<int,int> > > pq;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> R >> C;
    for(int i=1; i<=R; i++) {
        for(int j=1; j<=C; j++) {
            char tmp;
            cin >> tmp;
            if(tmp=='L') {
                if(!sw[0][0]) sw[0][0]=i,sw[0][1]=j;
                else sw[1][0]=i,sw[1][1]=j;
                q.push(make_pair(i,j));
            } else if(tmp=='.') {
                q.push(make_pair(i,j));
            }
            m[i][j]=tmp;
        }
    }
    q.push(make_pair(-1,-1));
    int count=0;
    while(count!=R*C) {
        while(!q.empty()) {
            int nx=q.front().first;
            int ny=q.front().second;
            q.pop();
            if(nx==-1) break;
            paze[nx][ny]=now;
            v[nx][ny]=1;
            count++;

            for(int i=0; i<4; i++) {
                int cx=nx+dirX[i];
                int cy=ny+dirY[i];
                if(!v[cx][cy] && m[cx][cy]=='X') {
                    v[cx][cy]=1;
                    q.push(make_pair(cx,cy));
                }
            }
        }
        q.push(make_pair(-1,-1));
        now++;
    }

    int ans=0;
    pq.push(make_pair(0,make_pair(sw[0][0],sw[0][1])));
    m[sw[0][0]][sw[0][1]]=0;
    while(!pq.empty()) {
        int np=pq.top().first;
        int nx=pq.top().second.first;
        int ny=pq.top().second.second;
        pq.pop();
        if(-np>ans) ans=-np;

        for(int i=0; i<4; i++) {
            int cx=nx+dirX[i];
            int cy=ny+dirY[i];
            if(m[cx][cy]) {
                pq.push(make_pair(-paze[cx][cy],make_pair(cx,cy)));
                if(m[cx][cy]=='L') {
                    printf("%d",ans);
                    return 0;
                }
                m[cx][cy]=0;
            }
        }
    }
    return 0;
}