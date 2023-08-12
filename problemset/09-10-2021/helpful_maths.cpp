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



int main() { _
  string s; cin>>s;
  vector<int> numbers;
  for(auto x : s) 
    if(isdigit(x)) 
      numbers.push_back(x-'0');
    
  sort(numbers.begin(),numbers.end());
  for(int i=0;i<numbers.size();i++) {
    if(i<numbers.size()-1)
      cout<<numbers[i]<<"+";
    else
      cout<<numbers[i]<<endl;
  }
  return 0;
}

