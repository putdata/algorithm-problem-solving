#include <bits/stdc++.h>
using namespace std;

set<string> sat;
vector<string> vec;
int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    int n,m; cin >> n >> m;
    while(n--) {
        string s; cin >> s;
        sat.insert(s);
    }
    while(m--) {
        string s; cin >> s;
        if(sat.find(s) != sat.end())
            vec.push_back(s);
    }
    sort(vec.begin(),vec.end());
    cout << vec.size() << '\n';
    for(auto s : vec)
        cout << s << '\n';
    return 0;
}