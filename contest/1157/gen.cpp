#include <bits/stdc++.h>
using namespace std;

int rand(int a,int b) {
  return rand()%(b-a+1)+a;
}

int main(int argc,char** argv) {
  srand(atoi(argv[1]));
  int n = rand(1,200);
  cout<<n<<endl;
  return 0;	
}
