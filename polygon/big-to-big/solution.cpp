#include <iostream>

using namespace std;

typedef long long ll;

const int MOD = 1e9+7;

ll fexp(ll b,ll e) {
  ll r=1;
  while(e) {
    if(e&1) r=(r*b)%MOD;
    b=(b*b)%MOD;
    e>>=1;
  }
  return r;
}

// nesses problema de exp binaria dava pra inves de elevar a n, elevar so a (n)%(MOD-1)

int main() {
  string sb,se;
  ll b=0,e=0;
  cin>>sb>>se;
  for(int i=0;i<sb.size();i++) {
    b=(b*10+(sb[i]-'0'))%MOD;
  }
  for(int i=0;i<se.size();i++) {
    e=(e*10+(se[i]-'0'))%(MOD-1);
  }
  ll ans = fexp(b,e);
  cout<<ans<<endl;
  return 0;
}