#include <bits/stdc++.h>
using namespace std;

vector<int> vec;
int main() {
    int T; cin >> T;
    for(int i=1; i<=1260; i++) {
        vec.push_back(i*i*i);
    }
    for(int i=1; i<=T; i++) {
        int st,en; cin >> st >> en;
        cout << "Case #" << i << ": " << lower_bound(vec.begin(),vec.end(),en) - lower_bound(vec.begin(),vec.end(),st) << '\n';
    }
    return 0;
}