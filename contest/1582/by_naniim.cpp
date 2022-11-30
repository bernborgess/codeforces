#include<bits/stdc++.h>
#define f first
#define s second
  #define pb push_back
 #define read(x) for(auto& qw : (x)) cin >> qw;
#define endl "\n"; //para problemas iterativos comentar essa linha
 #define all(v) v.begin(), v.end()
using namespace std;
typedef long long ll;
typedef pair<ll,ll> pii;
const int INF = 9999999;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;
const ll MOD = 1000000007;
const ll NO_OPERTATION = -1;
const double eps = 1e-8;
const int MAX = 100010;
 
 
int main ()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t!=0)
    {
        t--;
        ll n;
        cin>>n;
        ll m;
        ll x;
        cin>>m>>x;
        int dif=0;
        if(x%2==1){dif+=3;}
        if(dif==0 and m%2==1)
        {
            dif=2;
        }
        else if(dif>0 and m>0)
        {
            dif=1;
        }
        if(dif==0 and n%2==1)
        {
            dif=1;
        }
        else if(dif>0 and n>0)
        {
            if(dif==3 and n==1){dif=2;}
            else if(dif==3 and n%2==0){dif=1;}
            else if(dif==3 and n%2==1){dif=0;}
            else if(dif==2 and n%2==0){dif=0;}
            else if(dif==2 and n%2==1){dif=1;}
            else if(dif==1 and n%2==1){dif=0;}
        }
        cout<<dif<<endl;
    }
    return 0;
}