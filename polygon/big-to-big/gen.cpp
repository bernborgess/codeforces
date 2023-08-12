#include "testlib.h"
#include <iostream>

using namespace std;


int main(int argc, char* argv[]) {
  registerGen(argc, argv, 1);
  int sizeB = rnd.next(1, 9999);
  int sizeE = rnd.next(1, 9999);
  for(int i=0;i<sizeB;i++) {
    if(!i)
      cout<<(rnd.next(1,9));
    else
      cout<<(rnd.next(0,9));
  } cout<<endl;
  for(int i=0;i<sizeE;i++) {
     if(!i)
      cout<<(rnd.next(1,9));
    else
      cout<<(rnd.next(0,9));
  } cout<<endl;
  return 0;
}