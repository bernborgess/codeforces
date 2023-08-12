#include <bits/stdc++.h>
#include "testlib.h"
 
using namespace std;

int main(int argc, char* argv[]) {
  registerValidation(argc, argv);
  int t = inf.readInt(1,100,"t");
  inf.readEoln();
  for(int tt=1;tt<=t;tt++) {
    setTestCase(tt);
    int n = inf.readInt(1,5000,"n");
    inf.readEoln();
    for(int i=0;i<n;i++) {
      int b = inf.readInt(1,1000,"b");
      inf.readSpace();
      int l = inf.readInt(1,1000,"l");
      inf.readEoln();
    }
  }
  inf.readEof();
}

