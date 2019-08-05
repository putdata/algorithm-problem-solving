#include <bits/stdc++.h>
using namespace std;

int main() {
    double k,d1,d2;
    cin >> k >> d1 >> d2;
    d1/=2; d2/=2;
    double ans=k*k-((d1-d2)*(d1-d2));
    cout << ans;
    return 0;
}