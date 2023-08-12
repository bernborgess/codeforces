/**
 *    author:  bernborgess
 *    problem: d - 1629
 *    created: 22.January.2022 13:37:42
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
#define all(v) v.begin(), v.end()
#define reverse(s) reverse(s.begin(),s.end())
#define debug(x) cout << #x << " = " << x << endl

typedef long long ll;
typedef pair<int,int> pii;
const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;

bool isPalindrom(string&s) {
	return equal(s.begin(),s.begin()+s.size()/2,s.rbegin());
}

int main() { _
  int t;  cin>>t;
  int n;
  map<string,bool> mp;
  while(t--) {
    mp.clear();
    cin>>n;
    string s;
    bool found=false;
    for(int i=0;i<n;i++) {
      cin>>s;
      mp[s]=1;
      if(found) continue;
      if(isPalindrom(s)){found=true;continue;}
      string r(s.rbegin(), s.rend());
      if(mp[r]) {found=true;continue;}

      if(s.size()==2)
      for(char ch='a';ch<='z';ch++) {
        if(mp[r+ch]) {found=true;break;}
      }
      else {
        r.pop_back();
        if(mp[r]) {found=true;break;}
      }
    }
    cout<<(found?"YES":"NO")<<endl;
  }
  return 0;
}

/*
6
5
zx
ab
cc
zx
ba
2
ab
bad
4
co
def
orc
es
3
a
b
c
3
ab
cd
cba
2
ab
ab
*/
