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

/**
 * ? You are given a rectangular board of M × N squares. 
 * ? Also you are given an unlimited number of standard domino pieces of 2 × 1 squares. 
 * ? You are allowed to rotate the pieces. You are asked to place as many dominoes as 
 * ? possible on the board so as to meet the following conditions:
 * * 1. Each domino completely covers two squares.
 * * 2. No two dominoes overlap.
 * * 3. Each domino lies entirely inside the board. It is allowed to touch the edges of the board.
 * TODO: Find the maximum number of dominoes, which can be placed under these restrictions.
 */

int main() { _
  int m,n;  cin>>m>>n;
  if(m%2&&n%2) {
    cout<<(m*n-1)/2<<endl;
  } else {
    cout<<m*n/2<<endl;
  }
  return 0;
}

