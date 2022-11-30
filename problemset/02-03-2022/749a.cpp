/**
 *    author:  bernborgess
 *    problem: 749a - 02-03-2022
 *    created: 02.March.2022 16:50:01
**/
#include <bits/stdc++.h>

using namespace std;

#define _ ios_base::sync_with_stdio(0);cin.tie(0);

int main() { _
  int n; cin>>n;
  cout<<n/2<<endl;
  if(n%2) { cout<<3<<' ';n-=3;}
  while(n) {cout<<2<<' ';n-=2;}
  cout<<endl;
  return 0;
}

