#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    int n; cin >> n;
    tuple<int,int,int,int> tp[n];
    for(int i=0; i<n; i++) {
        int a,b,c;
        cin >> a >> b >> c;
        tp[i] = {-a,b,c,i+1};
    }
    sort(tp,tp+n);
    cout << get<3>(tp[0]);
    return 0;
}