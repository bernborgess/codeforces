#include <bits/stdc++.h>
#include "testlib.h"
 
typedef long long ll;
using namespace std;

int main(int argc, char* argv[]) {
  registerValidation(argc, argv);
  int k = inf.readInt(1,100000000,"k");
  inf.readSpace();
  int n = inf.readInt(1,10000,"n");
  inf.readEoln();
  for(int i=0;i<n;i++) {
    if(i)  inf.readSpace();
    string b = inf.readToken("0|[1-9][0-9]{0,49}", "b");
  }
  inf.readEoln();
  inf.readEof();
}

