#include <bits/stdc++.h>
using namespace std;

int N,M;
char m[101][101];
int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    cin >> N >> M;
    for(int i=0; i<N; i++) {
        for(int j=0; j<M; j++) {
            cin >> m[i][j];
            if(m[i][j] == '-') m[i][j]='|';
            else if(m[i][j] == '|') m[i][j]='-';
            else if(m[i][j] == '/') m[i][j]='\\';
            else if(m[i][j] == '\\') m[i][j]='/';
            else if(m[i][j] == '^') m[i][j]='<';
            else if(m[i][j] == '<') m[i][j]='v';
            else if(m[i][j] == 'v') m[i][j]='>';
            else if(m[i][j] == '>') m[i][j]='^';
        }
    }
    for(int i=0; i<M; i++) {
        for(int j=0; j<N; j++)
            cout << m[j][M-i-1];
        cout << '\n';
    }
    return 0;
}