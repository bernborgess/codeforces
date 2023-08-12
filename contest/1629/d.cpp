/**
 *    author:  bernborgess
 *    problem: d - 1629
 *    created: 22.January.2022 13:18:42
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
#define debug(x) cout << #x << " = " << x << endl

typedef long long ll;
typedef pair<int,int> pii;
const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;

const int MAX = 17600;
int has[MAX];


int main() { _
  int t;  cin>>t;
  int n;
  while(t--) {
    memset(has,0,sizeof(has));
    cin>>n;
    string s;
    bool found=false;
    for(int i=0;i<n;i++) {
      cin>>s;
      if(found) continue;
      if(s.size()==1) found=true;
      if(s.size()==2 and s[0]==s[1]) found=true;
      if(s.size()==3 and s[0]==s[2]) found=true;

      if(found) continue;

      int p;
      if(s.size()==1) p=s[0]-'a';
      if(s.size()==2) p=26*(s[0]-'a')+(s[1]-'a');
      if(s.size()==3) p=26*26*(s[0]-'a')+26*(s[1]-'a')+(s[2]-'a');


      if(s.size()==2) {
      for(int i=0;i<26;i++) 
      if(has[26*26*i+26*(s[1]-'a')+(s[0]-'a')]) {found=true;continue;}
      }

      if(s.size()==3) {
        if(has[26*26*(s[2]-'a')+26*(s[1]-'a')+(s[0]-'a')]) {found=true;continue;}
        if(has[26*(s[1]-'a')+(s[0]-'a')]) {found=true;continue;}
      }
      has[p]=1;
    }



    cout<<(found?"YES":"NO")<<endl;
  }
  return 0;
}

