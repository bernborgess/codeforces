#include <bits/stdc++.h>
using namespace std;

// rand in range [a,b]
int rand(int a,int b) {
  return rand()%(b-a+1)+a;
}

int main(int argc,char** argv) {
  srand(atoi(argv[1]));
  int t = rand(1,1000);
  cout<<t<<endl;
  for(int tt=0;tt<t;tt++) {
    int n = rand(1,200);
    cout<<n<<endl;
    for(int nn=0;nn<n;nn++) {
      // l r c
      int l = rand(1,100000000);
      int r = rand(l,100000000);
      int c = rand(1,100000000);
      cout<<l<<' '<<r<<' '<<c<<endl;
    }
  }
  return 0;	
}