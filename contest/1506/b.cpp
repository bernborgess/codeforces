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
    int t;  cin>>t;
    int n,k;
    char st[64],c;
    int pr, ul, rep;
    while(t--) {
        cin>>n>>k;
        pr=-1;  ul=-1;  rep=1;
        cin>>st;
        for(int i=0;i<n;i++) {
            if(st[i]=='*') {
                if(pr==-1)  pr=i;
                ul=i;
            }
        }
        if(ul!=pr)  rep++;
        while(ul-pr>k) {
            for(int i=k;i>0;i--) {
                if(st[pr+i]=='*') {
                    pr+=i;  rep++;  break;
                }
                if(st[ul-i]=='*') {
                    ul-=i;  rep++;  break;
                }

            }
        }
        cout<<rep<<endl;
    }   
    return 0;
}

