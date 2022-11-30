/**
 *    author:  bernborgess
 *    problem: b - 1659
 *    created: 17.April.2022 12:17:32
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
#define rall(v) v.rbegin(), v.rend()
#define debug(x) cout << #x << " = " << x << endl

// GCC BUILTIN FUNCTIONS
// __builtin_popcount(x)  // count_ones
// __builtin_parity(x)    // bit_parity
// __builtin_clz(x)       // count_lead_zeros
// __builtin_ctz(x)       // count_zeros
// __lg(x)                // log_two

typedef long long ll;
typedef pair<int,int> pii;
const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;


int main() { _
  int t;  cin>>t;
  int n,k;
  string s;
  while(t--) {
    cin>>n>>k;
    cin>>s;

    vector<int> ans(n);

    if(k&1) {
      // ajudar n impar de 1s
      int uns=0;
      int lz=-1,l1=-1;
      for(int i=0;i<s.size();i++) 
      if(s[i]=='1') {
        uns++;
        l1=i;
      }else{
        lz=i;
      }

      int troll=-1;

      if(uns%2==0) { //corner trola um 0 pra ajudar mais um 1
        if(uns<n&&l1<lz) {
           s[lz]='1';
           troll=lz;

        } 
        else      uns--;
      } 
      uns=min(uns,k);
      int last=k-uns;

      for(int i=0;i<s.size();i++) {
        int prnt = 0;
        if(s[i]=='1'&&uns>0) {
          prnt+=1;
          uns--;
        }
        if(i==n-1) prnt+=last;
        ans[i]=prnt;
        if(!(prnt&1)&&troll!=i) s[i]=(s[i]=='0'?'1':'0');
        if((prnt&1)&&troll==i) s[i]=(s[i]=='0'?'1':'0');
      }

      cout<<s<<endl;
      for(int i:ans){
        cout<<i<<' ';
      }
      cout<<endl;

    } else {
      // ajudar n par de 0s
      int zeros=0;
      int l1=-1,lz=-1;
      for(int i=0;i<s.size();i++) 
      if(s[i]=='0') {
        zeros++;
        lz=i;
      }else{
        l1=i;
      }

      int troll=-1;

      if(zeros&1) { //corner trola um 1 pra ajudar mais um 0
        if(zeros<n&&lz<l1) {
          s[l1]='0';
          troll=l1;
        }
        else zeros--;
      }

      zeros=min(zeros,k);
      int last=k-zeros;

     for(int i=0;i<s.size();i++) {
        int prnt = 0;
        if(s[i]=='0'&&zeros>0) {
          prnt+=1;
          zeros--;
        }
        if(i==n-1) prnt+=last;

        ans[i] = prnt;
        if((prnt)%2==1&&troll!=i) s[i]=(s[i]=='0'?'1':'0');
        if((prnt)%2!=1&&troll==i) s[i]=(s[i]=='0'?'1':'0');
      }

      cout<<s<<endl;
      for(int i:ans){
        cout<<i<<' ';
      }
      cout<<endl;

    }

    
  }
  return 0;
}

