#include <bits/stdc++.h>
using namespace std;

char s[102];
int main() {
  while(fgets(s,102,stdin)) {
    int big=0,small=0,num=0,blank=0;
    for(int i=0; s[i]; i++) {
      if(s[i]=='\n') break;
      if(s[i]==' ') blank++;
      else if(s[i]>='0' && s[i]<='9') num++;
      else if(s[i]>='a' && s[i]<='z') small++;
      else big++;
    }
    printf("%d %d %d %d\n",small,big,num,blank);
  }
  return 0;
}