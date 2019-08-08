#include <bits/stdc++.h>
using namespace std;

int N,S,a[20],ans;
void foo(int x, int sum, int len) {
    if(x==N) {
        if(len && sum==S) ans++;
        return;
    }
    foo(x+1,sum+a[x],len+1);
    foo(x+1,sum,len);
}

int main() {
    cin >> N >> S;
    for(int i=0; i<N; i++) cin >> a[i];
    foo(0,0,0);
    cout << ans;
    return 0;
}