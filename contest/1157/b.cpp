/**
 *    author:  bernborgess
 *    created: 05.November.2021 09:48:00
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
  int n,x;  cin>>n;
  string s; cin>>s;
  int f[10];
  for(int i=1;i<10;i++) 
    cin>>f[i];

  bool found=false;
  for(char& ch:s) {
    x = ch-'0';
    if(f[x]>x)
      found=true;
    if(found&&f[x]>=x)
      ch=(char)f[x]+'0';
    else if(found) {
      break;
    }
  }
  cout<<s<<endl;
  return 0;
}

