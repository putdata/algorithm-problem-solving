#include <bits/stdc++.h>
using namespace std;

int main() {
    int A,B,C;
    cin >> A >> B >> C;
    while(C--) A^=B;
    cout << A;
    return 0;
}