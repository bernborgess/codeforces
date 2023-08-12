#include <bits/stdc++.h>
#include "testlib.h"
 
using namespace std;
 
int main(int argc, char* argv[]) {
  registerValidation(argc, argv);
  string sb = inf.readToken("(0|[1-9][0-9]{0,9999})", "sb");
  bool sb_is_zero=true;
  for(char ch:sb) {
    if(ch!='0') sb_is_zero=false;
  }
  inf.readEoln();
  string se = inf.readToken("(0|[1-9][0-9]{0,9999})", "se");
  bool se_is_zero=true;
  for(char ch:se) {
    if(ch!='0') se_is_zero=false;
  }
  ensuref(!(sb_is_zero&&se_is_zero), "Invalid 0^0 is undefined!");
  inf.readEoln();
  inf.readEof();
}

