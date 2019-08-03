#include <bits/stdc++.h>
using namespace std;

int main() {
    int A,B,C; cin >> A >> B >> C;
    for(int i=0; i<C; i++) {
        cout << B*(i+1) + A*C << ' ';
    }
    return 0;
}