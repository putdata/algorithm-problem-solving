#include <bits/stdc++.h>
using namespace std;

int main() {
    int N; cin >> N;
    for(int i=1; i<=N; i++) {
        int P; cin >> P;
        int C,list[2001]; cin >> C;
        for(int j=0; j<C; j++) {
            cin >> list[j];
        }
        for(int j=0; j<C; j++) {
            bool search = false;
            for(int k=j+1; k<C ;k++) {
                if(list[j] + list[k] == P) {
                    cout << "Case #" << i << ": " << j+1 << ' ' << k+1 << '\n';
                    search=true;
                    break;
                }
            }
            if(search) break;
        }
    }
    return 0;
}