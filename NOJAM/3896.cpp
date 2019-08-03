#include <bits/stdc++.h>
using namespace std;

int T;
bitset<1300000> chk;
vector<int> prime;
int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    cin >> T;
    chk.reset();
    for(int i=2; i*i<=1299709; i++) {
        if(chk[i]) continue;
        for(int j=i*i; j<=1299709; j+=i) chk.set(j);
    }
    for(int i=2; i<=1299709; i++)
        if(!chk[i]) prime.push_back(i);
    while(T--) {
        int a; cin >> a;
        if(!chk[a]) {
            cout << "0\n";
            continue;
        }
        auto it = upper_bound(prime.begin(),prime.end(),a);
        cout << (*it - *(it-1)) << '\n';
    }
    return 0;
}