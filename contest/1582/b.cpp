#include <bits/stdc++.h>

using namespace std;

#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define fst first
#define snd second
#define pb push_back
#define dbg(x) cout << #x << " = " << x << endl

typedef long long ll;
typedef pair<int,int> pii;
const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;


ll fastexp(ll b, ll e);

int main() { _
  // int t;  cin>>t;
  // int n;
  // vector<int> a;
  // while(t--) {
  //   cin>>n; a.resize(n);
  //   int zeros=0, ones=0, temp;
  //   for(int i=0;i<n;i++) {
  //     cin>>temp;
  //     if(temp==1) ones++;
  //     if(temp==0) zeros++;
  //   }
  //   cout<<(ll)((ll)ones*pow(2,zeros))<<endl;
  // }
  return 0;
}

ll fastexp(ll b, ll e) {
  if(e==0)  return 1LL;
  ll ret=fastexp(b,e/2);
  ret=ret*ret;
  if(e%2) ret*=b;
  return ret;
}