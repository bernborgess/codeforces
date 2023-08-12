#include <bits/stdc++.h>
#include "testlib.h"

using namespace std;

int n;

inline int readAndCheckAnswer(InStream& in) {
  int result = in.readInt(-1, n * 100);
  return result;
}

int main(int argc, char* argv[]) {
  registerTestlibCmd(argc, argv);

  n = inf.readInt();
  int ja = readAndCheckAnswer(ans);
  int pa = readAndCheckAnswer(ouf);

  if(ja!=pa) 
    quitf(_wa, "Wrong sum");

  quitf(_ok, "n=%d", n);
}
