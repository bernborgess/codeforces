#include <bits/stdc++.h>

using namespace std;

#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define f first
#define s second
#define dbg(x) cout << #x << " = " << x << endl


typedef long long ll;

const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;

ll sr(ll R);
ll st(ll T);

int main(){ _
    
    int d,r,t;
    cin>>d>>r>>t;

    for(int i=0;i<1300;i++){
        //cout<<sr(i+d-1)<<" - "<<st(i)<<endl;
        if(sr(i+d-1)+st(i)==r+t){
            cout<<r-sr(i+d-1)<<endl;
            break;
        }
    }
    return 0;
}

ll sr(ll R){
    return (7+R)*R/2;
}

ll st(ll T){
    return (5+T)*T/2;
}