#include <bits/stdc++.h>
using namespace std;

int n, arr[14], ans[10];
void foo(int x, int y) {
  if (y==6) {
    for(int i=0; i<6; i++) printf("%d ",ans[i]);
    printf("\n");
  } else {
    for(int i=x; i<n; i++) {
      ans[y]=arr[i];
      foo(i+1,y+1);
    }
  }
}
int main() {
  while(1) {
    scanf("%d",&n);
    if(!n) break;
    for(int i=0; i<n; i++) scanf("%d",arr+i);
    sort(arr,arr+n);
    foo(0,0);
    printf("\n");
  }
  return 0;
}