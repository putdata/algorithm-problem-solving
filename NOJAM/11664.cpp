#include <bits/stdc++.h>
using namespace std;

int ax,ay,az,bx,by,bz,cx,cy,cz;
int main() {
  cin>>ax>>ay>>az>>bx>>by>>bz>>cx>>cy>>cz;
  double l=0,r=1.0,ans=2e9;
  while(r-l>=1e-10) {
    double ka=(2*l+r)/3,kb=(l+2*r)/3;
    double fax=ax+(bx-ax)*ka,fay=ay+(by-ay)*ka,faz=az+(bz-az)*ka;
    double fbx=ax+(bx-ax)*kb,fby=ay+(by-ay)*kb,fbz=az+(bz-az)*kb;
    double distA=(cx-fax)*(cx-fax)+(cy-fay)*(cy-fay)+(cz-faz)*(cz-faz);
    double distB=(cx-fbx)*(cx-fbx)+(cy-fby)*(cy-fby)+(cz-fbz)*(cz-fbz);

    ans=min(ans,min(distA,distB));
    if(distA>=distB) l=ka;
    else r=kb;
  }
  printf("%.10f",sqrt(ans));
  return 0;
}