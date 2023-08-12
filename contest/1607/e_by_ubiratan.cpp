#include <bits/stdc++.h>
 
using namespace std;
 
#define ll long long
#define f first
#define s second
 
const int MAX = 1e5;
const int MAX2 = 3e5;
 
const int INF = 0x3f3f3f3f;
 
int main() {
  int t;
  cin >> t;
  while(t--){
    int n;
    int m;
    cin >> n >> m;
    string s;
    cin >> s;
    int x = 0, y = 0;
    int mx = 0, my = 0;
    int Mx = 0, My = 0;
    for(char c: s){
      switch(c){
        case 'U':
          if(Mx - (x - 1) < n){
            x--;
            mx = min(x,mx);
          }
        break;
        case 'D':
          if((x + 1) - mx < n){
            x++;
            Mx = max(x,Mx);
          }
        break;
        case 'L':
          if(My - (y - 1) < m){
            y--;
            my = min(y,my);
          }
        break;
        case 'R':
          if((y + 1) - my < m){
            y++;
            My = max(y,My);
          }
        break;
      }
    }
    cout << n - Mx << ' ' << m - My << '\n';
  }
 
} 