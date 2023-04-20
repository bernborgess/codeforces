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
typedef vector<ll> vll;
const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;

int main() { _
    int n;
    cin>>n;
    vll x(n), sx(n), sx2(n), y(n), sy(n), sy2(n);

    for(int i=0;i<n;i++) 
        cin>>x[i]>>y[i];
    
    for(int i=n-2;i>=0;i--) {
        sx[i]=sx[i+1]+x[i+1];
        sx2[i]=sx2[i+1]+sqr(x[i+1]);
        sy[i]=sy[i+1]+y[i+1];
        sy2[i]=sy2[i+1]+sqr(y[i+1]);
    }

    ll ans=0;
    for(int i=0;i<n-1;i++) {
        ll k=n-i-1;
        ans+=k*sqr(x[i]);
        ans-=2*x[i]*sx[i];
        ans+=sx2[i];

        ans+=k*sqr(y[i]);
        ans-=2*y[i]*sy[i];
        ans+=sy2[i];
    }

    cout<<ans<<endl;
    return 0;
}


