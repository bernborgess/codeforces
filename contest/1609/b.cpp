/**
 *    author:  bernborgess
 *    created: 28.November.2021 11:54:56
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


int main() { _
  int n,q;  cin>>n>>q;
  string s; cin>>s;
  vector<bool> change(n);
  int rm=0;
  for(int i=2;i<n;i++) {
    if(s[i]=='c'&&s[i-1]=='b'&&s[i-2]=='a') {
      rm++;
      change[i]=true;
    }
  }
  while(q--) {
    int idx; char ch; cin>>idx>>ch; idx--;
    if(s[idx]==ch) {
      cout<<rm<<endl;
      continue;
    }
    if(ch=='c') {
      if(idx>=2&&s[idx-1]=='b'&&s[idx-2]=='a') {
        change[idx]=true;
        rm++;
      }
      if(change[idx+1]) { change[idx+1]=false; rm--; }
      if(change[idx+2]) { change[idx+2]=false; rm--; }
    }
    if(ch=='b') {
      if(idx>=1&&idx<n-1&&s[idx-1]=='a'&&s[idx+1]=='c') {
        change[idx+1]=true;
        rm++;
      }
      if(change[idx]) { change[idx]=false; rm--; }
      if(change[idx+2]) { change[idx+2]=false; rm--; }
    }
    if(ch=='a') {
      if(idx<n-2&&s[idx+1]=='b'&&s[idx+2]=='c') {
        change[idx+2]=true;
        rm++;
      }
      if(change[idx]) { change[idx]=false; rm--; }
      if(change[idx+1]) { change[idx+1]=false; rm--; }
    }
    s[idx] = ch;
    cout<<rm<<endl;
  }
  return 0;
}

