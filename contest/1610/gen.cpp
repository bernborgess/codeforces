#include <bits/stdc++.h>
using namespace std;

int rand(int a,int b) {
  return rand()%(b-a+1)+a;
}

int main(int argc,char** argv) {
  srand(atoi(argv[1]));
  cout<<1<<endl;
  int n = rand(1,20);
  cout<<n<<endl;
  for(int i=0;i<n;i++) {
    int a = rand(1,6);
    int b = rand(1,6);
    cout<<a<<" "<<b<<endl;
  }
  return 0;	
}

