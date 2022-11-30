/**
 *    author:  bernborgess
 *    problem: b - 103373
 *    created: 23.January.2022 00:40:21
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

int sumDiv(int x) {
  int ans=1;
  for(int i=2;i*i<=x;i++) {
    if(x%i==0) {
      ans+=i;
      if(i*i<x) ans+=x/i;
    }
  }
  return ans;
}

void printer(char ch) {
  cout<<(ch=='P'?"perfect":ch=='A'?"abundant":"deficient")<<endl;
}

int main() { _
  umap<int,char> mp;
  int t; cin>>t;
  while(t--) {
    int n; cin>>n;
    if(mp[n]) {printer(mp[n]);continue;}
    int ans=sumDiv(n);
    mp[n]=(ans==n?'P':ans>n?'A':'D');
    printer(mp[n]);
  }
  return 0;
}

