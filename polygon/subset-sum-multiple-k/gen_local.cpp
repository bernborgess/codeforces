#include <iostream>
using namespace std;
typedef long long ll;

int rand(int a,int b) {
  return rand()%(b-a+1)+a;
}

int main(int argc, char* argv[]) {
  srand(atoi(argv[1]));
  int k = rand(1,100000000);
  int order=rand(1,15);
  int n = rand(10,10<<order);
  cout<<k<<' '<<n<<endl;
  for(int i=0;i<n;i++) {
    if(i) cout<<' ';
    int digs = rand(1,50);
    int ch;
    for(int d=0;d<digs;d++) {
      if(d) ch=rand(0,9);
      else  ch=rand(1,9);
      cout<<ch;
    }
  }cout<<endl;
  return 0;
}
