#include <bits/stdc++.h>
#include "testlib.h"
 
using namespace std;
 
int main(int argc, char* argv[]) {
  registerValidation(argc, argv);
  string f = inf.readToken("[0]{1,9999}1[0]{1,9999}", "f");
  inf.readEoln();
  ensuref(f.size()<10000, "Invalid, field is too large!");
  int moves = inf.readInt(0, 9999, "moves");
  inf.readEoln();
  while (moves--) {
    string mov =  inf.readLine();
    ensuref((mov=="<"||mov==">"), "Invalid move!");
  }
  inf.readEof();
}

