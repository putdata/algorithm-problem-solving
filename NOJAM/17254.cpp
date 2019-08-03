#include <bits/stdc++.h>
using namespace std;

int N,M;
tuple<int,int,char> tp[1001];
int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    cin >> N >> M;
    for(int i=0; i<M; i++) {
        int a,b;
        char c;
        cin >> a >> b >> c;
        tp[i]={b,a,c};
    }
    sort(tp,tp+M);
    string ans="";
    for(int i=0; i<M; i++) {
        char tmp = get<2>(tp[i]);
        ans.push_back(tmp);
    }
    cout << ans;
    return 0;
}