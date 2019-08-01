#include <bits/stdc++.h>
using namespace std;

int N,xy[51][2];
int main() {
    cin >> N;
    for(int i=0; i<N; i++) cin >> xy[i][0] >> xy[i][1];
    for(int i=0; i<N; i++) {
        int ans=1;
        for(int j=0; j<N; j++) {
            if(i==j) continue;
            if(xy[i][0] < xy[j][0] && xy[i][1] < xy[j][1]) ans++;
        }
        cout << ans << ' ';
    }
    return 0;
}