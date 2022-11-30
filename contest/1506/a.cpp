#include <bits/stdc++.h>

using namespace std;

#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define f first
#define s second
#define pb push_back
#define dbg(x) cout << #x << " = " << x << endl

typedef long long ll;
const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;



int main() { _
    ll t;  cin>>t;
    ll n,m,x;
    ll row, col;
    while(t--) {
        cin>>n>>m>>x;
        // row = ((x-1)%n);
        // col = (x-1)/n;
        cout<<((x-1)%n)*m+((x-1)/n)+1<<endl;
    }    
    return 0;
}

