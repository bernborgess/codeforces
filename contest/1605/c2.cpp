/**
 *    author:  ubiratan
 *    created: 12.November.2021 
**/

#include <bits/stdc++.h>
 
using namespace std;
 
#define ll long long
#define f first
#define _ ios_base::sync_with_stdio(false);cin.tie(NULL);
const int INF = 0x3f3f3f3f;
 
const int MAX = 1e5;
const int MAX2 = 3e5;
 
int main() {
  int t;  cin>>t;
  while(t--){
    int n;  string s;
    cin>>n>>s;
    int sol = INF;
    for(int i = 0; i < n; i++){
      if(s[i] != 'a') continue;
      int a = 1,b = 0,c = 0;
      for(int j = i+1; j < min(n,i+20); j++){
        switch(s[j]){
          case 'a':
          a++;
          break;
          case 'b':
          b++;
          break;
          case 'c':
          c++;
          break;
        }
        if(a > b and a > c){
          sol = min(sol,j-i+1);
          break;
        }
      }
      if(sol == 2)break;
    }
    if(sol == INF)sol = -1;
    cout << sol << '\n';
  }
} 