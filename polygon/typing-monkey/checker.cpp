#include <bits/stdc++.h>
#include "testlib.h"
 
using namespace std;
 
int main(int argc, char* argv[]) {
  registerTestlibCmd(argc, argv);
  int t = inf.readInt();
  for(int tt=1;tt<=t;tt++) {
    setTestCase(tt);
    int ja = ans.readInt(0, 1000,"ja");
    int pa = ouf.readInt(0, 1000,"pa"); 
    if(ja!=pa) 
      quitf(_wa, "");
  } 
  quitf(_ok, "");
}
