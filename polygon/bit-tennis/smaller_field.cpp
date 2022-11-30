#include <iostream>
#include "testlib.h"
using namespace std;

int main(int argc, char* argv[]) {
  registerGen(argc, argv, 1);
  int sizeF = rnd.next(3,20);
  int ball = rnd.next(1,sizeF-2);
  int moves = rnd.next(0,9999);
  for(int i=0;i<ball;i++) cout<<'0';
  cout<<'1';
  for(int i=ball+1;i<sizeF;i++) cout<<'0';
  cout<<endl<<moves<<endl;
  for(int i=0;i<moves;i++) {
    char mv = (rnd.next(0,1)?'>':'<');
    cout<<mv<<endl;
  }
  return 0;
}

