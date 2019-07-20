#include <bits/stdc++.h>
using namespace std;
typedef pair<double,double> pdd;

int a[2],b[2],c[2],d[2];
pdd minho(double p) {
  return {a[0]+(b[0]-a[0])*(p/100),a[1]+(b[1]-a[1])*(p/100)};
}
pdd kangho(double p) {
  return {c[0]+(d[0]-c[0])*(p/100),c[1]+(d[1]-c[1])*(p/100)};
}
int main() {
  cin>>a[0]>>a[1]>>b[0]>>b[1]>>c[0]>>c[1]>>d[0]>>d[1];
  double fp=0,lp=100,ans=2e9;
  while(lp-fp>=1e-10) {
    double k1=(fp*2+lp)/3,k2=(fp+2*lp)/3;

    pdd m_k1=minho(k1),m_k2=minho(k2);
    pdd k_k1=kangho(k1),k_k2=kangho(k2);
    
    double dist_k1=pow(m_k1.first-k_k1.first,2)+pow(m_k1.second-k_k1.second,2);
    double dist_k2=pow(m_k2.first-k_k2.first,2)+pow(m_k2.second-k_k2.second,2);

    ans=min(ans,min(dist_k1,dist_k2));
    if(dist_k1>=dist_k2) fp=k1;
    else lp=k2;
  }
  cout.setf(ios::fixed);
  cout.precision(10);
  cout << sqrt(ans);
  return 0;
}