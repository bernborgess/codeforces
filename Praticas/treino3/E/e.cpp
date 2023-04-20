/**
 *    author:  bernborgess
 *    problem: e - E
 *    created: 27.February.2022 15:25:14
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


int main() { _
  int n,k;
  cin>>n>>k;
  if(k<__builtin_popcount(n)||n<k) {
    cout<<"NO"<<endl;
    return 0;
  }
  cout<<"YES"<<endl;

  int abac[32]={0};
  abac[0]=n;
  int idx=0;
  while(n>k) {
    if((n-abac[idx]/2)>=k) {
      abac[idx+1]=abac[idx]/2;
      n-=abac[idx]/2;
      abac[idx]%=2;
      idx++;
    } else {
      while(abac[idx]<2) idx++;
      abac[idx]-=2;
      abac[idx+1]++;
      n--;
    }
  }
  for(int i=0;i<32;i++) {
    for(int j=0;j<abac[i];j++) {
      cout<<(1<<i)<<' ';
    }
  }
  cout<<endl;

  return 0;
}

// KOTLIN HEROES
/*
fun readInt() = readLine()!!.toInt()

fun oneBits(x:Int): Int {
  var ans=0
  var num=x
  while(num>0) {
    if(num%2!=0)
      ans+=1
    num/=2
  }
  return ans
}

fun main() {
  var (n,k) = readLine()!!.split(" ").map { it.toInt() }.toIntArray()
  if(k<oneBits(n)||n<k) {
    println("NO")
    return
  }
  println("YES")
  
  var abac = Array<Int>(32){0} 
  abac[0]=n
  var idx=0
  while(n>k) {
    if((n-abac[idx]/2)>=k) {
      abac[idx+1]=abac[idx]/2
      n-=abac[idx]/2
      abac[idx]%=2
      idx+=1
    } else {
      while(abac[idx]<2) idx++
      abac[idx]-=2
      abac[idx+1]+=1
      n-=1
    }
  }
  for (i in 0..31) {
   for(j in 0..(abac[i]-1)) {
     print((1 shl i).toString()+" ")
   }
  }
  println("")
}

*/