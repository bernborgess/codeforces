/**
 *    author:  bernborgess
 *    created: 04.November.2021 20:19:37
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
#define bs bitset
#define sqr(a) (a)*(a)
#define endl '\n'
#define debug(x) cout << #x << " = " << x << endl

typedef long long ll;
typedef pair<int,int> pii;
const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;


int main() { _
  int X,Y,N,K; cin>>X>>Y>>N;
  vector<int> v;
  ll avg=0;
  while(cin>>K>>K) {
    v.pbk(K);
    avg+=K;
  }
  // v.pbk(K);
  // sort(begin(v),end(v));

  // int median = N%2?((v[N/2]+v[N/2+1])/2):v[N/2];
  avg/=N;
  ll sum=X;
  for(int i=0;i<N;i++) {
    // sum+=2*abs(v[i]-median);
    sum+=2*abs(v[i]-avg);
  }
  cout<<sum<<endl;
  return 0;
}

