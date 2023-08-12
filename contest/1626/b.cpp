/**
 *    author:  bernborgess
 *    problem: b - 1626
 *    created: 16.January.2022 11:22:08
**/
#include <bits/stdc++.h>

using namespace std;

#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define fst first
#define snd second
#define pbk push_back
#define lob lower_bound // iterator for first el not less than x
#define upb upper_bound // iterator for first el bigger than x
#define mkp make_pair
#define mkt make_tuple
#define uset unordered_set
#define umap unordered_map
#define bs bitset
#define sqr(a) (a)*(a)
#define endl '\n'
#define all(v) v.begin(), v.end()
#define debug(x) cout << #x << " = " << x << endl

typedef long long ll;
typedef pair<int,int> pii;
const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;


int main() {// _
  int t;  cin>>t;
  string num;
  while(t--) {
    cin>>num;
    int found=-1;
    for(int i=num.size()-2;i>=0;i--) {
      if(num[i]-'0'+num[i+1]-'0'>=10) {
        found=i;
        int a=num[i]-'0';
        int b=num[i+1]-'0';
        num[i]=((a+b)/10)+'0';
        num[i+1]=(a+b)%10+'0';
        break;
      }
    }
    if(found!=-1) {
      cout<<num<<endl;
    } else {
      int a=num[0]-'0';
      int b=num[1]-'0';
      num[1]=(a+b)+'0';
      num.erase(0,1);
      cout<<num<<endl;
    }
  }
  return 0;
}

