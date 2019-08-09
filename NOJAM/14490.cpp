#include <bits/stdc++.h>
using namespace std;

int foo(int x, int y) {
    if(y==0) return x;
    return foo(y,x%y);
}

int main() {
    int n,m;
    scanf("%d:%d",&n,&m);
    int gcd=foo(n,m);
    printf("%d:%d",n/gcd,m/gcd);
    return 0;
}