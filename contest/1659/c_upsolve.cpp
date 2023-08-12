/**
 *    author:  MvKaio
 *    problem: c_upsolve - 1659
 *    created: 17.April.2022 16:53:12
**/
#include <bits/stdc++.h>

using namespace std;

#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define endl '\n'

typedef long long ll;


int main() { _
  int t;  cin>>t;
  while(t--) {
    
    ll n,a,b;
    cin>>n>>a>>b;
    vector<ll>x(n);
    for(ll&i:x)cin>>i;

    //? DP[i] => minimum cost to conquer all
    //? cities after the ith.
    vector<ll> DP(n+1,0LL);

    auto prev = [&] (int i) {
      return (i?x[i-1]:0);
    };

    ll sum = 0LL;

    for(int i=n-1;i>=0;i--) {

      //? sum up the accumulated distances (r)
      sum+=x[i];

      DP[i]=min(
      //? conquer a kingdom and
      //? move the capital here
      //? use best result for the next
        a*(x[i]-prev(i))+
        b*(x[i]-prev(i))+
        DP[i+1],

      //? use prev as capital for all the others
        (sum- ((n-i)*prev(i)) )*b
      );
    }

    //! Minimum cost to conquer all cities
    cout<<DP[0]<<endl;

  }
  return 0;
}

