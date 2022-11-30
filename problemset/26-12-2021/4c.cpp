/**
 *    author:  bernborgess
 *    created: 26.December.2021 12:06:59
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
  map<string,int> db;
  int n; cin>>n;
  while(n--) {
    string name; cin>>name;
    if(db[name]) {
      db[name]++;
      cout<<name<<db[name]-1<<endl;
    } else {
      cout<<"OK"<<endl;
      db[name]=1;
    }
  }
  return 0;
}

