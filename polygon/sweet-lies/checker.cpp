#include <bits/stdc++.h>
#include "testlib.h"
 
using namespace std;
 
int main(int argc, char* argv[]) {
  registerTestlibCmd(argc, argv);
  int t = inf.readInt();
  for(int tt=1;tt<=t;tt++) {
    setTestCase(tt);
    string ja = ans.readLine("(LIAR|HONEST)","ja"); 
    string pa = ouf.readLine("(LIAR|HONEST)","pa"); 
    if(ja!=pa) 
      quitf(_wa, "");
  } 
 
 
  quitf(_ok, "");
}
