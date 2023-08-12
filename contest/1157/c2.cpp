/**
 *    author:  bernborgess
 *    created: 05.November.2021 10:24:39
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
#define bst bitset
#define sqr(a) (a)*(a)
#define endl '\n'
#define debug(x) cout << #x << " = " << x << endl

typedef long long ll;
typedef pair<int,int> pii;
const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;

const int MAX = 2e5+10;
int arr[MAX];

int main() { _
  int n; cin>>n;
  for(int i=0;i<n;i++) {
    cin>>arr[i];
  }
  int l=0,r=n-1,e=0,c=0;
  bool empate=false;
  string moves;
  while(true) {
    if(arr[l]>e&&arr[r]>e) {
      if(arr[l]<arr[r]) {
        e=arr[l];
        c++,l++;
        moves.pbk('L');
      } else if(arr[r]<arr[l]) {
        e=arr[r];
        c++,r--;
        moves.pbk('R');
      } else {
        empate=true;
        break;
      }
    } else if(arr[l]>e) {
      e=arr[l];
      c++,l++;
      moves.pbk('L');
    } else if(arr[r]>e) {
      e=arr[r];
      c++,r--;
      moves.pbk('R');
    } else {
      break;
    } 
  }
  if(l==r&&arr[l]>e) {
    c++;
    moves.pbk('L');
  }
  if(empate) {
    int llen=0,rlen=0,le=e,re=e;
    // L->
    for(int i=l;i<r;i++) {
      if(arr[i]>le) {
        llen++;
        le=arr[i];
      } else break;
    }
    // <-R
    for(int i=r;i>l;i--) {
      if(arr[i]>re) {
        rlen++;
        re=arr[i];
      } else break;
    }
    if(llen>rlen) {
      c+=llen;
      for(int i=0;i<llen;i++)
        moves.pbk('L');
    } else {
      c+=rlen;
      for(int i=0;i<rlen;i++) {
        moves.pbk('R');
      }
    }
  }

  cout<<c<<endl;
  cout<<moves<<endl;
  return 0;
}

