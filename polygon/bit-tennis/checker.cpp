#include <bits/stdc++.h>
#include "testlib.h"
 
using namespace std;
 
int main(int argc, char* argv[]) {
  registerTestlibCmd(argc, argv);
 
  string ja = ans.readLine("(OLGA|OMAR|DRAW)","ja"); 
  string pa = ouf.readLine("(OLGA|OMAR|DRAW)","pa"); 
 
  if(ja!=pa) 
    quitf(_wa, "");
 
  quitf(_ok, "");
}
