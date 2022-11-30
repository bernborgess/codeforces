#include <iostream>
#include <string.h>
#include "testlib.h"
using namespace std;

const int MAX = 1010;
bool prime[MAX];
void crivo() {
  memset(prime,true,sizeof(prime));
  prime[0]=prime[1]=false;
  for(int p=2;p<1000;p++) 
  if(prime[p]) 
  for(int m=p*p;m<1000;m+=p) 
    prime[m]=false;  
}

int main(int argc, char* argv[]) {
  registerGen(argc, argv, 1);
  int t = rnd.next(1,100);
  crivo();
  cout<<t<<endl;
  while(t--) {
    int n = rnd.next(1,5000);
    cout<<n<<endl;
    int p=rnd.next(1,30);
    while(!prime[p]) p++;
    for(int i=0;i<n;i++) {
      int l = rnd.next(1,p);
      cout<<p<<' '<<l<<endl;
      p++;
      while(!prime[p]&&p<1000) p++;
      if(p==1000) p=2;
    }
  }
  return 0;
}



