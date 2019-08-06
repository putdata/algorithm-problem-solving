#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    int con[101]={};
    int N; cin >> N;
    tuple<int,int,int> tp[N];
    for(int i=0; i<N; i++) {
        int a,b,c;
        cin >> a >> b >> c;
        tp[i] = {-c,b,a};
    }
    sort(tp,tp+N);
    int i=0;
    for(auto it : tp) {
        auto [c,b,a] = it;
        if(con[a]>1) continue;
        con[a]++;
        cout << a << ' ' << b << '\n';
        if(++i==3) break;
    }
    return 0;
}