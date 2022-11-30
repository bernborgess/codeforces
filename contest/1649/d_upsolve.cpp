/**
 *    author:  bernborgess
 *    problem: d_upsolve - 1649
 *    created: 06.March.2022 20:07:49
**/
#include <bits/stdc++.h>

using namespace std;

#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define endl '\n'

typedef long long ll;
const int INF = 0x3f3f3f3f;

int main() { _
  int t;  cin>>t;
  int n,c,e;
  while(t--) {
    cin>>n>>c;
    vector has(c+1,false);
    for(int i=0;i<n;i++) {
      cin>>e;
      has[e]=true;
    }

    if(!has[1]) { cout<<"No"<<endl; continue; }

    vector next(c+2,INF);
    for(int i=c;i>0;i--)
      next[i] = has[i]?i:next[i+1];
    
    auto some = [&](int l,int r) -> bool {
      return next[l] <= r;
    };

    bool integral=true;

    // crivo, testar os mulitplos
    for(int d=1;d<=c&&integral;d++)
    if(has[d])
    for(int j=d;j<=c&&integral;j+=d)
    if(some(j,j+d-1))
      integral&=has[j/d];

    cout<<(integral?"Yes":"No")<<endl;
  }
  return 0;
}

