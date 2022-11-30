#include <iostream>
#include "testlib.h"
using namespace std;

void randBoolStr() {
  if(rnd.next(0,5)) {
    cout<<rnd.next(-1000,1000);
  } else {
    cout<<(rnd.next(0,1)?"true":"false");
  }
}

int main(int argc, char* argv[]) {
  registerGen(argc, argv, 1);
  int n = rnd.next(1,10000);
  cout<<n<<endl;
  for(int i=0;i<n;i++) {
    cout<<"while ( ";
    randBoolStr();
    cout<<" ) { if ( ";
    randBoolStr();
    cout<<" ) break; }"<<endl;
  }
  return 0;
}

