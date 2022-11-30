/**
 *    author:  bernborgess
 *    created: 12.November.2021 12:13:37
**/
#include <bits/stdc++.h>

using namespace std;

#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define fst first
#define snd second
#define pbk push_back
#define lob lower_bound
#define upb upper_bound
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


int main() { _
  int t,n; cin>>t;
  string s;
  vector<int> as;
  while(t--) {
    cin>>n>>s; as.resize(0);

    bool corner=false; // 0:b 1:c
    if (s.find("abbacca") != std::string::npos) {
      corner=true;
    }
    if (s.find("accabba") != std::string::npos) {
      corner=true;
    }

    int idxLasta=-1,mDist=INF,mIdx=-1;
    for(int i=0;i<n;i++) {
      if(s[i]=='a') {
        if(idxLasta==-1) {
          idxLasta=i;
          continue;
        }
        if(i-idxLasta<mDist) {
          // corner: accabba
          if(i-idxLasta==3) {
            if(s[i-1]==s[i-2]&&s[i-1]!='a') {
              idxLasta=i;
              continue;
            }
          }
          mDist=i-idxLasta;
          mIdx=idxLasta;
          idxLasta=i;
        }
      }
    }
    cout<<(mDist>=4?(corner?7:-1):mDist+1)<<endl;
  }
  return 0;
}

