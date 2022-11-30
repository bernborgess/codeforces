/**
 *    author:  bernborgess
 *    created: 28.November.2021 13:31:41
**/
#include <bits/stdc++.h>

using namespace std;

#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define fst first
#define snd second
#define pbk push_back
#define lob lower_bound // iterator for first el not less than x
#define upb upper_bound // iterator for first el bigger than x
#define mkp make_pair
#define mkt make_tuple
#define uset unordered_set
#define umap unordered_map
#define bs bitset
#define sqr(a) (a)*(a)
#define endl '\n'
#define debug(x) cout << #x << " = " << x << endl

typedef long long ll;
typedef pair<int,int> pii;
const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;

const int MAX = 2e3+10;
vector<vector<int>> g(MAX);
vector<int> friends(MAX);

int main() { _
  int n,d;
  cin>>n>>d;
  int M=0;
  vector<int> cc(n);
  for(int i=0;i<n;i++) 
    cc[i]=i;
  map<int,int> mp;
  for(int i=0;i<n;i++) 
    mp[cc[i]]=1;

  int Midx=0;
  int Sidx=-1;

  while(d--) {
    int x,y;
    cin>>x>>y; x--,y--;
    if(cc[x]==cc[y]) { // conecta 2 cc
      if(Sidx!=-1) {
        for(int i=0;i<n;i++) {
         if(cc[i]==Sidx) cc[i]=Midx;
        }
        mp[Midx]+=mp[Sidx];
        mp.erase(Sidx);
        Sidx=-1;
      }else {
        int big=0,sbig=-1,bigI=-1,sbigI=-1;
        for(auto x:mp) {
          if(x.snd>big) {
            sbig=big;
            sbigI=bigI;
            big=x.snd;
            bigI=x.fst;
          }else if (x.snd>sbig) {
            sbig=x.snd;
            sbigI=x.fst;
          }
        }
        Midx=bigI;
        Sidx=sbigI;
        for(int i=0;i<n;i++) {
         if(cc[i]==Sidx) cc[i]=Midx;
        }
        mp[Midx]+=mp[Sidx];
        mp.erase(Sidx);
        Sidx=-1;
      }
    } else {
      for(int i=0;i<n;i++) {
        if(cc[i]==cc[y]) cc[i]=cc[x];
      }
      mp[cc[x]]+=mp[cc[y]];
      mp.erase(cc[y]);

      if(mp[cc[x]]>mp[Midx]) {
        Sidx=Midx;
        Midx=cc[x];
      }else if(Sidx!=-1&&mp[cc[x]]>mp[Sidx]) {
        Sidx=cc[x];
      }
      cc[y]=cc[x];
    }
    if(mp[cc[x]]>M) {
      M=mp[cc[x]];
      Midx=cc[x];
    }
    cout<<mp[Midx]<<endl;
  }
  return 0;
}

