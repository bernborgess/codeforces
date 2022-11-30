#include<bits/stdc++.h>
using namespace std;

string get_abc_string(int x) {
  string out;
  x+=6561;
  while(x>3) {
    out.push_back(x%3+'a');
    x/=3;
  }
  reverse(out.begin(),out.end());
  return out;
}

int main() {
   string test;

  for (int i=0; i<pow(3,7); i++) {
    test = get_abc_string(i);
    cout<<test<<endl;
  }
  return 0;
}