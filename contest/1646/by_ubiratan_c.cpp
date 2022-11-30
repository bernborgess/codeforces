#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define f first
#define s second
#define _ ios_base::sync_with_stdio(false);cin.tie(NULL);

const int MAX = 1e5;
const ll MOD = 998244353;

const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3f;

//f = 15!
int rec(ll num, ll i = 15, ll f = 1307674368000){
  if(num < 0) return INF;
  if(i == 2)  return __builtin_popcountll(num);
  return min(rec(num,i-1,f/i),rec(num-f,i-1,f/i)+1);
}

int main() {
  int t;
  cin >> t;
  while(t--){
    ll num;
    cin >> num;
    cout << rec(num) << '\n';
  }
}