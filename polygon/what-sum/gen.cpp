#include "testlib.h"
#include <iostream>

using namespace std;

int main(int argc, char* argv[]) {
  registerGen(argc, argv, 1);
  int n = rnd.next(1, 20);
  cout<<n<<endl;
  for(int i=0;i<n;i++) {
    cout << (i?" ":"") << rnd.next(1, 100);
  }
  cout << endl;
  return 0;
}