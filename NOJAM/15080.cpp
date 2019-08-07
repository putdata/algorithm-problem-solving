#include <bits/stdc++.h>
using namespace std;

int main() {
    int a,b,c,d,e,f;
    scanf("%d : %d : %d\n%d : %d : %d",&a,&b,&c,&d,&e,&f);
    int t1=a*3600+b*60+c, t2=d*3600+e*60+f;
    if(t2<t1) t2+=86400;
    printf("%d",t2-t1);
    return 0;
}