#include <iostream>
#include "testlib.h"
using namespace std;
typedef long long ll;


int main(int argc, char* argv[]) {
  registerGen(argc, argv, 1);
  int k = rnd.next(1,100000000);
  int n = rnd.next(1,10000);
  cout<<k<<' '<<n<<endl;
  for(int i=0;i<n;i++) {
    if(i) cout<<' ';
    int digs = rnd.next(1,50);
    int ch;
    for(int d=0;d<digs;d++) {
      if(d) ch=rnd.next(0,9);
      else  ch=rnd.next(1,9);
      cout<<ch;
    }
  }cout<<endl;
  return 0;
}

