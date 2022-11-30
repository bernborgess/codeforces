#include <iostream>
using namespace std;
typedef long long ll;

int main() {
  string field;
  ll ball=0,sizeF=0;
  cin>>field;
  sizeF=field.size();
  for(int i=0;i<sizeF;i++) {
    if(field[i]=='1') {
      ball=i;
      break;
    }
  }
  int m; cin>>m;
  ll pos=ball,omar=0,olga=0;
  char move;
  while(m>0) {
    cin>>move;
    if(move=='>')   pos++;
    else            pos--;
    if(pos==0) {
      pos=ball;
      omar++;
    }
    if(pos==sizeF-1) {
      pos=ball;
      olga++;
    }
    m--;
  }
  cout<<(omar>olga?"OMAR":(omar<olga?"OLGA":"DRAW"))<<endl;
  return 0;
}


