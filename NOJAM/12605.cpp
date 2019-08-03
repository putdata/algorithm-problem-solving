#include <bits/stdc++.h>
using namespace std;

int main() {
    int N; cin >> N;
    cin.ignore();
    for(int i=1; i<=N; i++) {
        vector<string> word;
        string s;
        getline(cin, s);
        int len=s.size(), last=0;
        for(int j=0; j<len; j++) {
            if(s[j]==' ') {
                word.push_back(s.substr(last,j-last));
                last=j+1;
            }
        }
        word.push_back(s.substr(last,len));
        cout << "Case #" << i << ": ";
        for(auto it=word.rbegin(); it!=word.rend(); it++)
            cout << *it << ' ';
        cout << '\n';
    }
    return 0;
}