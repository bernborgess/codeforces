/**
 *    author:  bernborgess
 *    created: 14.December.2021 12:38:32
 **/
#include <bits/stdc++.h>

using namespace std;

#define _                       \
  ios_base::sync_with_stdio(0); \
  cin.tie(0);
#define fst first
#define snd second
#define pbk push_back
#define lob lower_bound  // iterator for first el not less than x
#define upb upper_bound  // iterator for first el bigger than x
#define mkp make_pair
#define mkt make_tuple
#define uset unordered_set
#define umap unordered_map
#define bs bitset
#define sqr(a) (a) * (a)
#define endl '\n'
#define debug(x) cout << #x << " = " << x << endl

typedef long long ll;
typedef pair<int, int> pii;
const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;

const int MAX = 110;

ll gcd(ll a, ll b) {
  if (a == 0LL)
    return b;
  return gcd(b % a, a);
}

int main() { _ 
  int t;  cin>>t;
  int n;
  ll arr[MAX];
  while (t--) {
    cin >> n;
    for(int i=0; i<n; i++) cin>>arr[i];

    int gcdPar,gcdImpar;
    switch (n) {
      case 1:
        gcdPar=arr[0];
        gcdImpar=INF;
        break;
      
      case 2:
        gcdPar=arr[0];
        gcdImpar=arr[1];
        break;
      
      case 3:
        gcdPar=gcd(arr[0],arr[2]);
        gcdImpar=arr[1];
        break;
      
      default:
        gcdPar=gcd(arr[0],arr[2]);
        gcdImpar=gcd(arr[1],arr[3]);
        break;
    }
   
    for(int i=4;i<n;i+=2) gcdPar=gcd(gcdPar,arr[i]);
    for(int i=5;i<n;i+=2) gcdImpar=gcd(gcdImpar,arr[i]);

    bool failed=false;
    for(int i=1;i<n;i+=2) if(arr[i]%gcdPar==0) {
      failed=true;
      break;
    }
    if(!failed) {
      cout<<gcdPar<<endl;
      continue;
    }
    failed=false;
    for(int i=0;i<n;i+=2) if(arr[i]%gcdImpar==0) {
      failed=true;
      break;  
    }
    if(!failed) {
      cout<<gcdImpar<<endl;
      continue;
    }
    cout<<0<<endl;
  }
  return 0;
}
