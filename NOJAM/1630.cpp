#include <bits/stdc++.h>
using namespace std;

vector<bool> tmp;
vector<int> prime;
long long ans=1;
int main() {
    int n; cin >> n;
    tmp.resize(n+1);
    for(int i=2; i<=n; i++) {
        if(tmp[i]) continue;
        prime.push_back(i);
        for(int j=i*2; j<=n; j+=i) tmp[j]=1;
    }
    for(int it : prime) {
        int t=n;
        while(t/it) {
            t/=it;
            ans=(ans*it)%987654321;
        }
    }
    cout << ans;
    return 0;
}