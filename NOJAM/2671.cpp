#include <bits/stdc++.h>
using namespace std;

int main() {
    regex reg("(100+1+|01)+");
    cmatch m;
    string s; cin >> s;
    regex_match(s.c_str(),m,reg) ? cout << "SUBMARINE" : cout << "NOISE";
    return 0;
}