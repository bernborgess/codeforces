#include <bits/stdc++.h>

using namespace std;

#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define fst first
#define snd second
#define pb push_back
#define dbg(x) cout << #x << " = " << x << endl
typedef pair<int,int> pii;
typedef long long ll;
const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;

int main() { _
  int n,k;
  cin>>n>>k;
  vector<int> v(n); for(int &i: v) cin>>i;
  
  map<int,int> m;
  set<int> s; 

  for(int l=0,r=0;r<n;) {
    while(r <k + l && r<n) {
      m[v[r]]++;
      if(m[v[r]]==1) {
        // bom
        s.insert(v[r]);
      }
      if(m[v[r]]==2) {
        // ficou ruim
        s.erase(v[r]);
      }
      r++;
    }
    //resposta desse intervalo.
    cout << *s.rbegin() << endl;
    m[v[l]]--;
    if(m[v[l]]==0) {
      // deixar de contar
      s.erase(v[l]);
    }
    l++;
  }
/*
  while(c>0) {//(   )(   )(   )
    sett.clear();
    lixo.clear();
    for(int i=0;i<k,c>=0;i++,c--) {
      cin>>a;
      if(!sett.count(a) && !lixo.count(a)) {
        sett.insert(a);
      } else {
        sett.erase(a);
        lixo.insert(a);
      }
    }
    if(!sett.empty())
      cout<<*(sett.rbegin())<<endl;
    else
      cout<<"Nothing"<<endl;
  }*/
  return 0;
}

