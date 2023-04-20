/**
 *    author:  bernborgess
 *    problem: f - E
 *    created: 27.February.2022 21:25:19
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

// GCC BUILTIN FUNCTIONS
// __builtin_popcount(x)  // count_ones
// __builtin_parity(x)    // bit_parity
// __builtin_clz(x)       // count_lead_zeros
// __builtin_ctz(x)       // count_zeros
// __lg(x)                // log_two

typedef long long ll;
typedef pair<int,int> pii;
const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;

const int MAX = 150001;

int main() { _
  int n,e,big=0;
  map<int,int>mp;
  cin>>n;
  for(int i=0;i<n;i++) {
    cin>>e; mp[e]++;
    if(e>big) big=e;
  }
  ll team=0;
  // for(auto x:mp) {
  //   cout<<x.fst<<' '<<x.snd<<endl;
  //   // olha se alcancou o anterior
  //   if(mp[x.fst-1]==2||mp[x.fst-2]) {

  //   }
  // }
  for(int i=1;i<=min(big+2,MAX);i++) {
    if(mp[i-1]) team++;
    else if(mp[i]) {
      team++;
      mp[i]--;
    } else if(mp[i+1]) {
      mp[i+1]--;
      team++;
    }
  }
  cout<<team<<endl;


  return 0;
}

/*
fun readInt() = readLine()!!.toInt()
fun readArray() = readLine()!!.split(" ").map { it.toInt() }.toIntArray()
 

fun main() {
  val MAX = 150001
  val n = readInt()
  
  val mp:MutableMap<Int,Int> = mutableMapOf<Int,Int>()
  
  val a = readArray()
  
  for(i in a) {
    mp[i] = (mp[i] ?: 0) + 1
  }
  var team = 0
  for(i in 1..MAX) {
    if(mp.contains(i-1)&&mp[i-1]!!.compareTo(0)>0) team+=1
    else if(mp.contains(i)&&mp[i]!!.compareTo(0)>0) {
      team+=1
      mp[i] = (mp[i] ?: 0) - 1
    } else if(mp.contains(i+1)&&mp[i+1]!!.compareTo(0)>0) {
      team+=1
      mp[i] = (mp[i] ?: 0) - 1
    }
  }
  println(team)
}
*/