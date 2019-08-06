#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    while(1) {
        int N; cin >> N;
        if(N==0) break;
        string p;
        double key=-1;
        while(N--) {
            string a;
            double b;
            cin >> a >> b;
            if(b>key) p=a,key=b;
            else if(b==key) p+=" " + a;
        }
        cout << p << '\n';
    }
    return 0;
}