#include <bits/stdc++.h>
#include "testlib.h"
 
using namespace std;
 
int n;
 
const int MOD = 1000000007;
 
int main(int argc, char* argv[]) {
  registerTestlibCmd(argc, argv);
 
  int ja = ans.readInt(0,MOD-1,"ja");
  int pa = ouf.readInt(0,MOD-1,"pa");
 
  if(ja!=pa) 
    quitf(_wa, "Wrong ID");
 
  quitf(_ok, "ID=%d", pa);
}
