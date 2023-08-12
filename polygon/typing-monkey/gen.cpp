#include <iostream>
#include "testlib.h"
using namespace std;

int main(int argc, char* argv[]) {
  registerGen(argc, argv, 1);
  int t = rnd.next(1,100000);
  cout<<t<<endl;
  for(int i=0;i<t;i++) {
    bool isUpper=false;

    int keys=10;
    if(!rnd.next(0,3)) {
      isUpper=true; keys--;
    }
    cout<<(char)(rnd.next(0,25)+(isUpper?'A':'a'));
    keys--;

    for(;keys>0;keys--) {
      bool letterKey = rnd.next(0,5);
      if(letterKey) {
        char ch = rnd.next(0,25);
        ch+=(isUpper?'A':'a');
        cout<<ch;
      } else {
        isUpper=!isUpper;
      }
    }
    cout<<endl;
  }
  return 0;
}

