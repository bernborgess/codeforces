/**
 *    author:  bernborgess
 *    problem: c_upsolve - 1618
 *    created: 12.January.2022 20:32:48
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

const int MAX = 110;
ll a[MAX];

ll gcd(ll a,ll b) {
  if(b==0) return a;
  return gcd(b,a%b);
}

int main() { _
  int t; cin>>t;
  int n;
  while(t--) {
    cin>>n;
    ll god=0,devil=0;
    for(int i=0;i<n;i++) {
      cin>>a[i];
      // " Whatever God is doing, 
      //  Satan will surely be attempting to 
      //  teach the opposite."
      if(i&1) 
        god=gcd(god,a[i]);
      else    
        devil=gcd(devil,a[i]);
    }
    bool salvation=true;

    // "Watch and pray that you may not enter into 
    // temptation. The spirit indeed is willing, but 
    // the flesh is weak."
    for(int i=1;i<n;i+=2) 
    if(!(a[i]%devil)) {salvation=false;break;}

    // "Since you have kept my command to endure patiently, 
    // I will also keep you from the hour of trial that is 
    // going to come on the whole world to test the inhabitants
    // of the earth."
    if(salvation){cout<<devil<<endl;continue;}

    // "God always offers us a second chance in life."
    salvation=true;
    for(int i=0;i<n;i+=2)
    if(!(a[i]%god)) {salvation=false;break;}

    cout<<(salvation?god:0)<<endl;
  }
  return 0;
}

