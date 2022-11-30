#include <iostream>
#include "testlib.h"
using namespace std;

int main(int argc, char* argv[]) {
  registerGen(argc, argv, 1);
  int t = rnd.next(1,100);
  cout<<t<<endl;
  while(t--) {
    int n = rnd.next(1,5000);
    cout<<n<<endl;
    for(int i=0;i<n;i++) {
      int b = rnd.next(1,1000);
      int l = rnd.next(1,1000);
      cout<<b<<' '<<l<<endl;
    }
  }
  return 0;
}

