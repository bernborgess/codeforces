#include <bits/stdc++.h>
#include "testlib.h"
 
using namespace std;
 
int main(int argc, char* argv[]) {
  registerTestlibCmd(argc, argv);
  int n = inf.readInt();
  for(int i=0;i<n;i++) {
    string ja = ans.readLine("(YES|NO)","ja"); 
    string pa = ouf.readLine("(YES|NO)","pa"); 
    if(ja!=pa) 
      quitf(_wa, "");
  } 
  quitf(_ok, "");
}
