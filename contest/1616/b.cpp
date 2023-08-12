/**
 *    author:  bernborgess
 *    problem: b - 1616
 *    created: 29.December.2021 13:49:37
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


int main() { _
  int t,n,k; cin>>t;
  string s;
  while(t--) {
    cin>>n>>s;
    for(k=1;k<n;k++) if(s[k-1]<=s[k]&&(k==1||s[k]!=s[k-1])) break;
    for(int i=0;i<k;i++)    cout<<s[i];
    for(int i=k-1;i+1;i--)  cout<<s[i];
    cout<<endl;
  }
  return 0;
}

