https://github.com/brunomaletta/Biblioteca/blob/master/Codigo/Matematica/2sat.cpp#include <bits/stdc++.h>

using namespace std;

#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define endl '\n'
#define all(x) begin(x),end(x)

typedef long long ll;

const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;

enum Op {
  EQ,NE,LT,GT,LE,GE
};

struct Ex {
  int x;
  int y;
  enum Op op;
  int c;
};

bool next(vector<bool>&a) {
  for(int i=a.size()-1;i>=0;i--) {
    if(!a[i]) {
      a[i] = true;
      return true;
    }
    a[i] = false;
  }
  return false;
}

int main() { _;
  int n,m;
  cin>>n>>m;
  vector<bool>a(n);
  vector<Ex> exs(m);
  for(auto&[x,y,op,c]:exs) {
    string ops;
    cin>>x>>y>>ops>>c;
    if(ops== "=")  op=EQ; 
    if(ops== "!=") op=NE; 
    if(ops== "<")  op=LT;
    if(ops== ">")  op=GT;
    if(ops== "<=") op=LE; 
    if(ops== ">=") op=GE; 
  }

  while(next(a)) {


  }
  
  for(int i=0;i<m;i++) {
    auto[x,y,op,c]=exs[i];
    cout<<a[x]<<'+'<<a[y]<<op<<c<<endl;
  }

  return 0;
}
