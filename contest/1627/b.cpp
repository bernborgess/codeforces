/**
 *    author:  bernborgess
 *    problem: b - 1627
 *    created: 15.January.2022 11:44:20
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

// 0 1 2 3 4 5 6 7 8 9 A B
// 3 3 4 4 4 4 4 4 5 5 5 5 

int main() { _
  int t;  cin>>t;
  int n,m;
  while(t--) {
    cin>>n>>m;
    if(n<m) swap(n,m);
    if(n%2==0&&m%2==0) {

      int full=4;
      int inc=0;
      int ans=(n/2)+(m/2);
      bool wall=false;
      bool ceiling=false;
      for(int i=0;i<n*m-1;i++) {
        if(inc==full) {
          if((full+4)/2>m) {
            wall=true; 
          }
          if(!wall)  full=full+4;
          else {
            debug(ans);
            cout<<(n+1)/2<<endl;
            if(ans-(n/2)+(m/2)==(n+1)/2) ceiling=true;
            if(ceiling) {
              int off = (ans-(n/2)+(m/2)-(n+1)/2)+1;
              full = m-2*off;

            } else {
              full=2*m;
            }
          }
          inc=0;
          ans++;
        }
        if(i) cout<<' ';
        cout<<ans;
        inc++;
      }
      
      cout<<endl;
    }
    else if(n%2==1&&m%2==1) {
      int full=1;
      int inc=0;
      int ans=n-1-(n/2)+m-1-(m/2);
      bool wall=false;
      bool ceiling=false;
      for(int i=0;i<n*m-1;i++) {
        if(inc==full) {
          if(full<4) {
            if(3>m) wall=true;
            if(!wall) full=4;
            else      full=2;
            inc=0;
            ans++;
          }
          else {
            if((full+4)/2+1>m) {
              wall=true; 
            }
            if(!wall)  full=full+4;
            else {
              if(ans-(n/2)+(m/2)==(n+1)/2) ceiling=true;
              if(ceiling) {
                full=m-2*(ans-(n/2)+(m/2)-n/2);
              } else {
                full=2*m;
              }
            }
            inc=0;
            ans++;
          }
     
        }
        if(i) cout<<' ';
        cout<<ans;
        inc++;
      }
      
      cout<<endl;
    } else {
      int full=2;
      int inc=0;
      int ans=(n/2) + (m/2);      
      bool ceiling=false;
      bool wall=false;
      for(int i=0;i<n*m;i++) {
        if(inc==full) {
          if((full+4)/2+(m&1?1:2)>m) {
            wall=true; 
          }
          if(!wall)  full=full+4;
          else {
            if(ans-(n/2)+(m/2)==(n+1)/2) ceiling=true;
            if(ceiling) {
              full=m-2*(ans-(n/2)+(m/2)-n/2);
            } else {
              full=2*m;
            }
          }
          inc=0;
          ans++;
        }
        if(i) cout<<' ';
        cout<<ans;
        inc++;
      }
      cout<<endl;
    }


  }
  return 0;
}

