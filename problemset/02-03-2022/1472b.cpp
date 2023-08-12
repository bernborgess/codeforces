/**
 *    author:  bernborgess
 *    problem: 1472b - 02-03-2022
 *    created: 02.March.2022 17:13:42
**/
#include <bits/stdc++.h>

using namespace std;

#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define w while
#define endl '\n'


int main() { _
  int t,n,_1,_2,e; cin>>t;
  w(t--) {
    cin>>n; _1=0,_2=0;
    w(n--) {
      cin>>e;e--;
      e?_2++:_1++;
    }
    cout<<(_1&1||!_1&&_2&1?"NO":"YES")<<endl;
  }
  return 0;
}

