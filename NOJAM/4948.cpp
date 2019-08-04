#include <bits/stdc++.h>
using namespace std;

vector<int> p;
vector<bool> chk(300010,0);
int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    for(int i=2; i*i<=300000; i++) {
        if(chk[i]) continue;
        for(int j=i*i; j<=300000; j+=i) chk[j]=1;
    }
    for(int i=2; i<=300000; i++)
        if(!chk[i]) p.push_back(i);
    while(1) {
        int n; cin >> n;
        if(n==0) break;
        int cnt=(lower_bound(p.begin(),p.end(),2*n) - 1) - upper_bound(p.begin(),p.end(),n) + 1;
        if(n==1) cnt++;
        cout << cnt << '\n';
    }
    return 0;
}