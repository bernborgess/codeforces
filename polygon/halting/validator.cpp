#include <bits/stdc++.h>
#include "testlib.h"
 
using namespace std;
 
int main(int argc, char* argv[]) {
  registerValidation(argc, argv);
  int n = inf.readInt(1,10000);
  string pat,bol;
  pattern pnum("0|-?[1-9][0-9]*|true|false");
  inf.readEoln();
  for(int i=0;i<n;i++) {
    pat = inf.readToken("while","while");
    inf.skipBlanks();
    pat = inf.readToken("\\(","(");
    inf.skipBlanks();
    bol = inf.readToken(pnum,"b1");
    inf.skipBlanks();
    pat = inf.readToken("\\)",")");
    inf.skipBlanks();
    pat = inf.readToken("\\{","{");
    inf.skipBlanks();
    pat = inf.readToken("if","if");
    inf.skipBlanks();
    pat = inf.readToken("\\(","(");
    inf.skipBlanks();
    bol = inf.readToken(pnum,"b2");
    inf.skipBlanks();
    pat = inf.readToken("\\)",")");
    inf.skipBlanks();
    pat = inf.readToken("break;","break;");
    inf.skipBlanks();
    pat = inf.readToken("\\}","}");
    inf.readEoln();
    // string code = inf.readLine("while\\\\ \(\\\\ (true|false|0|-?[1-9][0-9]*)\\\\ \)\\\\ \{\\\\ if\\\\ \(\\\\ (true|false|0|-?[1-9][0-9]*)\\\\ \)\\\\ break;\\\\ \}", "code");
  }
  inf.readEof();
}

/*
1
while ( 1 ) { if ( 2 ) break; }
*/