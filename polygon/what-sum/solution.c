#include <stdio.h>

int main() {
  int n,s=0,e;
  scanf("%d",&n);
  for(int i=0;i<n;i++) {
    scanf("%d",&e);
    s+=e;
  }
  printf("%d\n",s);
  return 0;
}