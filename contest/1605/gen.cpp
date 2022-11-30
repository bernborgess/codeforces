#include <bits/stdc++.h>
using namespace std;

int rand(int a,int b) {
  return rand()%(b-a+1)+a;
}

int main(int argc,char** argv) {
  srand(atoi(argv[1]));
  int t = rand(1,20);
  cout<<t<<endl;
  for(int i=0;i<t;i++) {
    int n = rand(2,1000);
    for(int j=0;j<n;j++) {
      cout<<"abc"[rand(0,2)];
    } cout<<endl;
  }
  return 0;
}