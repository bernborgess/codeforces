#include<bits/stdc++.h>

using namespace std;

#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define fst first
#define snd second
#define pbk push_back
#define lob lower_bound
#define upb upper_bound
#define mkp make_pair
#define make_tuple
#define uset unordered_set
#define umap unordered_map
#define bs bitset
#define sqr(a) (a)*(a)
#define all(x) begin(x),end(x)
#define endl '\n'
#define debug(x) cout << #x << " = " << x<< endl

typedef long long ll;
typedef pair<int,int> pii;
const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;
int n;
vector<int> v;
ll loss(int p,bool apply) {
    ll cut = 0;
    int lp = v[p];
    auto rule = [&](int i){
      if(v[i]>lp) {
        cut+=v[i]-lp;
        if(apply)
          v[i]=lp;
      }
      else if(v[i]<lp)
        lp=v[i];
    };

    for(int i=p-1;i>=0;i--) 
      rule(i);
        
    lp = v[p];
    for(int i=p+1;i<n;i++) 
      rule(i);

    return cut;
}

int main() { _
    cin>>n;
    v.resize(n);
    for(int&i:v)cin>>i;

    ll ml=LINF;
    int mi = -1;
    for(int i=0;i<n;i++) {
        ll ls = loss(i,false);
        if(ls<ml) {
            ml=ls;
            mi=i;
        }
    }
    loss(mi,true);
    for(int i:v)cout<<i<<' ';
    cout<<endl;
	return 0;
}

