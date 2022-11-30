/**
 *    author:  bernborgess
 *    created: 12.November.2021 11:49:13
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
  while(t--) {
    cin>>n>>s;
    int c1=0,c0=0;
    bool ordered=true;
    for(char ch:s) {
      if(ch=='1') c1++;
      if(ch=='0') c0++;
      if(ch=='0'&&c1>0) ordered=false;
    }
    if(ordered) {
      cout<<0<<endl;
      continue;
    }
    cout<<1<<endl;
    int printNum=0;
    for(int i=0;i<s.size();i++) {
      if(i<c0&&s[i]=='1') printNum++;
      else if(i>=c0&&s[i]=='0') printNum++;
    }
    cout<<printNum<<' ';
    for(int i=0;i<s.size();i++) {
      if(i<c0&&s[i]=='1') cout<<i+1<<' ';
      else if(i>=c0&&s[i]=='0') cout<<i+1<<' ';
    }
    cout<<endl;
  }
  return 0;
}

