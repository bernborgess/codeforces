#include <iostream>
#include "testlib.h"
using namespace std;
typedef long long ll;


int main(int argc, char* argv[]) {
  registerGen(argc, argv, 1);
  int k=rnd.next(1,100000);
  k=2*k+1;
  int n = rnd.next(1,10000);
  cout<<k<<' '<<n<<endl;
  for(int i=1;i<=n;i++) {
    if(i>1) cout<<' ';
    cout<<2*i;
  }
  cout<<endl;
  return 0;
}

