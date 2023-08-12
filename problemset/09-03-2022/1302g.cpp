/**
 *    author:  bernborgess
 *    problem: 1302g - 09-03-2022
 *    created: 09.March.2022 17:10:44
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

void r(int& n, int off) {
  n = (n + off) % 10;
}

void debugX(vector<int>& x) {
  for (int i = 1; i <= 5; i++)
    cout << x[i];
  cout << endl;
}

void manip(vector<int>& x,ll i) {
//? If sum of digits on positions 3 and 4 is greater than 10,
// rotate digit on position 2 by 9 times,
// else rotate digit on position 5 by 4 times.
// 0
  if(!!(i&(1LL<<0))^(x[3]+x[4]>10))
    r(x[2],9);
  else
    r(x[5],4);
//? If digit on position 3 is greater than digit on position 5,
// rotate digit on position 2 by 4 times,
// else rotate digit on position 4 by 6 times.
// 1
  if(!!(i&(1LL<<1))^(x[3]>x[5]))
    r(x[2],4);
  else
    r(x[4],6);  
//? If digit on position 5 is greater than digit on position 3,
// rotate digit on position 2 by 1 times,
// else rotate digit on position 1 by 7 times.
// 2
  if(!!(i&(1LL<<2))^(x[5]>x[3]))
    r(x[2],1);
  else
    r(x[1],7);  
//? If sum of digits on positions 4 and 1 is greater than 8,
// rotate digit on position 2 by 7 times,
// else rotate digit on position 3 by 3 times.
// 3
  if(!!(i&(1LL<<3))^(x[4]+x[1]>8))
    r(x[2],7);
  else
    r(x[3],3);  
//? If digit on position 4 is greater than digit on position 1,
// rotate digit on position 2 by 3 times,
// else rotate digit on position 3 by 2 times.
// 4
  if(!!(i&(1LL<<4))^(x[4]>x[1]))
    r(x[2],3);
  else
    r(x[3],2);  
//? If sum of digits on positions 1 and 2 is greater than 9,
// rotate digit on position 3 by 6 times,
// else rotate digit on position 5 by 3 times.
// 5
  if(!!(i&(1LL<<5))^(x[1]+x[2]>9))
    r(x[3],6);
  else
    r(x[5],3);  
//? If digit on position 3 is greater than digit on position 2,
// rotate digit on position 1 by 2 times,
// else rotate digit on position 4 by 5 times.
// 6
  if(!!(i&(1LL<<6))^(x[3]>x[2]))
    r(x[1],2);
  else
    r(x[4],5);  
//? If digit on position 5 is greater than digit on position 3,
// rotate digit on position 2 by 1 times,
// else rotate digit on position 4 by 5 times.
// 7
  if(!!(i&(1LL<<7))^(x[5]>x[3]))
    r(x[2],1);
  else
    r(x[4],5);  
//? If sum of digits on positions 5 and 1 is greater than 10,
// rotate digit on position 4 by 7 times,
// else rotate digit on position 3 by 5 times.
// 8
  if(!!(i&(1LL<<8))^(x[5]+x[1]>10))
    r(x[4],7);
  else
    r(x[3],5);  
//? If sum of digits on positions 5 and 4 is greater than 9,
// rotate digit on position 3 by 9 times,
// else rotate digit on position 2 by 4 times.
// 9
  if(!!(i&(1LL<<9))^(x[5]+x[4]>9))
    r(x[3],9);
  else
    r(x[2],4);  
//? If sum of digits on positions 3 and 1 is greater than 8,
// rotate digit on position 2 by 8 times,
// else rotate digit on position 4 by 4 times.
// 10
  if(!!(i&(1LL<<10))^(x[3]+x[1]>8))
    r(x[2],8);
  else
    r(x[4],4);  
//? If digit on position 5 is greater than digit on position 2,
// rotate digit on position 1 by 5 times,
// else rotate digit on position 3 by 8 times.
// 11
  if(!!(i&(1LL<<11))^(x[5]>x[2]))
    r(x[1],5);
  else
    r(x[3],8);  
//? If sum of digits on positions 1 and 4 is greater than 10,
// rotate digit on position 3 by 4 times,
// else rotate digit on position 5 by 1 times.
// 12
  if(!!(i&(1LL<<12))^(x[1]+x[4]>10))
    r(x[3],4);
  else
    r(x[5],1);  
//? If digit on position 3 is greater than digit on position 5,
// rotate digit on position 2 by 1 times,
// else rotate digit on position 1 by 6 times.
// 13
  if(!!(i&(1LL<<13))^(x[3]>x[5]))
    r(x[2],1);
  else
    r(x[1],6);  
//? If sum of digits on positions 1 and 5 is greater than 9,
// rotate digit on position 3 by 3 times,
// else rotate digit on position 2 by 1 times.
// 14
  if(!!(i&(1LL<<14))^(x[1]+x[5]>9))
    r(x[3],3);
  else
    r(x[2],1);  
//? If digit on position 5 is greater than digit on position 1,
// rotate digit on position 4 by 8 times,
// else rotate digit on position 2 by 1 times.
// 15
  if(!!(i&(1LL<<15))^(x[5]>x[1]))
    r(x[4],8);
  else
    r(x[2],1);  
//? If digit on position 4 is greater than digit on position 1,
// rotate digit on position 3 by 4 times,
// else rotate digit on position 5 by 4 times.
// 16
  if(!!(i&(1LL<<16))^(x[4]>x[1]))
    r(x[3],4);
  else
    r(x[5],4);  
//? If sum of digits on positions 3 and 1 is greater than 8,
// rotate digit on position 5 by 3 times,
// else rotate digit on position 2 by 6 times.
// 17
  if(!!(i&(1LL<<17))^(x[3]+x[1]>8))
    r(x[5],3);
  else
    r(x[2],6);  
//? If digit on position 3 is greater than digit on position 4,
// rotate digit on position 2 by 3 times,
// else rotate digit on position 1 by 5 times.
// 18
  if(!!(i&(1LL<<18))^(x[3]>x[4]))
    r(x[2],3);
  else
    r(x[1],5);  
//? If digit on position 5 is greater than digit on position 4,
// rotate digit on position 2 by 7 times,
// else rotate digit on position 3 by 8 times.
// 19
  if(!!(i&(1LL<<19))^(x[5]>x[4]))
    r(x[2],7);
  else
    r(x[3],8);  
//? If digit on position 2 is greater than digit on position 4,
// rotate digit on position 5 by 9 times,
// else rotate digit on position 1 by 4 times.
// 20
  if(!!(i&(1LL<<20))^(x[2]>x[4]))
    r(x[5],9);
  else
    r(x[1],4);  
//? If sum of digits on positions 3 and 5 is greater than 10,
// rotate digit on position 4 by 1 times,
// else rotate digit on position 2 by 5 times.
// 21
  if(!!(i&(1LL<<21))^(x[3]+x[5]>10))
    r(x[4],1);
  else
    r(x[2],5);  
//? If digit on position 4 is greater than digit on position 1,
// rotate digit on position 3 by 9 times,
// else rotate digit on position 2 by 9 times.
// 22
  if(!!(i&(1LL<<22))^(x[4]>x[1]))
    r(x[3],9);
  else
    r(x[2],9);  
//? If digit on position 5 is greater than digit on position 3,
// rotate digit on position 2 by 4 times,
// else rotate digit on position 1 by 6 times.
// 23
  if(!!(i&(1LL<<23))^(x[5]>x[3]))
    r(x[2],4);
  else
    r(x[1],6);  
//? If sum of digits on positions 3 and 4 is greater than 9,
// rotate digit on position 5 by 8 times,
// else rotate digit on position 2 by 5 times.
// 24
  if(!!(i&(1LL<<24))^(x[3]+x[4]>9))
    r(x[5],8);
  else
    r(x[2],5);  
//? If sum of digits on positions 3 and 4 is greater than 10,
// rotate digit on position 5 by 2 times,
// else rotate digit on position 1 by 5 times.
// 25
  if(!!(i&(1LL<<25))^(x[3]+x[4]>10))
    r(x[5],2);
  else
    r(x[1],5);  
//? If sum of digits on positions 5 and 4 is greater than 9,
// rotate digit on position 3 by 3 times,
// else rotate digit on position 1 by 8 times.
// 26
  if(!!(i&(1LL<<26))^(x[5]+x[4]>9))
    r(x[3],3);
  else
    r(x[1],8);  
//? If digit on position 5 is greater than digit on position 2,
// rotate digit on position 1 by 4 times,
// else rotate digit on position 3 by 8 times.
// 27
  if(!!(i&(1LL<<27))^(x[5]>x[2]))
    r(x[1],4);
  else
    r(x[3],8);  
//? If digit on position 3 is greater than digit on position 1,
// rotate digit on position 5 by 6 times,
// else rotate digit on position 2 by 6 times.
// 28
  if(!!(i&(1LL<<28))^(x[3]>x[1]))
    r(x[5],6);
  else
    r(x[2],6);  
//? If digit on position 4 is greater than digit on position 5,
// rotate digit on position 1 by 6 times,
// else rotate digit on position 3 by 1 times.
// 29
  if(!!(i&(1LL<<29))^(x[4]>x[5]))
    r(x[1],6);
  else
    r(x[3],1);  
//? If sum of digits on positions 3 and 5 is greater than 10,
// rotate digit on position 2 by 5 times,
// else rotate digit on position 1 by 7 times.
// 30
  if(!!(i&(1LL<<30))^(x[3]+x[5]>10))
    r(x[2],5);
  else
    r(x[1],7);  
//? If sum of digits on positions 5 and 2 is greater than 9,
// rotate digit on position 4 by 9 times,
// else rotate digit on position 3 by 5 times.
// 31
  if(!!(i&(1LL<<31))^(x[5]+x[2]>9))
    r(x[4],9);
  else
    r(x[3],5);  
//? If sum of digits on positions 2 and 4 is greater than 10,
// rotate digit on position 3 by 1 times,
// else rotate digit on position 1 by 2 times.
// 32
  if(!!(i&(1LL<<32))^(x[2]+x[4]>10))
    r(x[3],1);
  else
    r(x[1],2);  
//? If digit on position 3 is greater than digit on position 4,
// rotate digit on position 5 by 7 times,
// else rotate digit on position 2 by 1 times.
// 33
  if(!!(i&(1LL<<33))^(x[3]>x[4]))
    r(x[5],7);
  else
    r(x[2],1);  
//? If digit on position 2 is greater than digit on position 5,
// rotate digit on position 1 by 6 times,
// else rotate digit on position 4 by 2 times.
// 34
  if(!!(i&(1LL<<34))^(x[2]>x[5]))
    r(x[1],6);
  else
    r(x[4],2);  
//? If digit on position 2 is greater than digit on position 1,
// rotate digit on position 5 by 3 times,
// else rotate digit on position 4 by 4 times.
// 35
  if(!!(i&(1LL<<35))^(x[2]>x[1]))
    r(x[5],3);
  else
    r(x[4],4);  
//? If digit on position 5 is greater than digit on position 4,
// rotate digit on position 3 by 9 times,
// else rotate digit on position 1 by 9 times.
// 36
  if(!!(i&(1LL<<36))^(x[5]>x[4]))
    r(x[3],9);
  else
    r(x[1],9);  
//? If digit on position 1 is greater than digit on position 5,
// rotate digit on position 4 by 6 times,
// else rotate digit on position 2 by 5 times.
// 37
  if(!!(i&(1LL<<37))^(x[1]>x[5]))
    r(x[4],6);
  else
    r(x[2],5);  
//? If sum of digits on positions 1 and 5 is greater than 10,
// rotate digit on position 3 by 7 times,
// else rotate digit on position 2 by 4 times.
// 38
  if(!!(i&(1LL<<38))^(x[1]+x[5]>10))
    r(x[3],7);
  else
    r(x[2],4);  
//? If sum of digits on positions 2 and 1 is greater than 9,
// rotate digit on position 3 by 7 times,
// else rotate digit on position 5 by 4 times.}
// 39
  if(!!(i&(1LL<<39))^(x[2]+x[1]>9))
    r(x[3],7);
  else
    r(x[5],4);
}

int getOrder() {
  vector<int> x = {0, 0, 0, 0, 0, 0};
  vector<int> xF = {0, 4, 3, 2, 6, 6};
  vector<int> y = {0, 1, 2, 3, 4, 5};
  vector<int> yF = {0, 8, 7, 2, 2, 9};
  ll i = 0;
  bool done;

  for (; i < (1LL << 40); i++) {
    x = {0, 0, 0, 0, 0, 0};
    y = {0, 1, 2, 3, 4, 5};

    manip(x,i);
    manip(y,i);  

    done = true;
    for (int i = 1; i <= 5; i++)
      if (x[i] != xF[i]) done = false;

    for (int i = 1; i <= 5; i++)
      if (y[i] != yF[i]) done = false;

    if (done) break;
  }
  return i;
}

void solve(vector<int>&x) {
//? If sum of digits on positions 3 and 4 is greater than 10,
// rotate digit on position 2 by 9 times,
// else rotate digit on position 5 by 4 times.
// 0
  if(x[3]+x[4]>10)
    r(x[2],9);
  else
    r(x[5],4);
//? If digit on position 3 is greater than digit on position 5,
// rotate digit on position 2 by 4 times,
// else rotate digit on position 4 by 6 times.
// 1
  if(x[3]>x[5])
    r(x[2],4);
  else
    r(x[4],6);  
//? If digit on position 5 is greater than digit on position 3,
// rotate digit on position 2 by 1 times,
// else rotate digit on position 1 by 7 times.
// 2
  if(x[5]>x[3])
    r(x[2],1);
  else
    r(x[1],7);  
//? If sum of digits on positions 4 and 1 is greater than 8,
// rotate digit on position 2 by 7 times,
// else rotate digit on position 3 by 3 times.
// 3
  if(x[4]+x[1]>8)
    r(x[2],7);
  else
    r(x[3],3);  
//? If digit on position 4 is greater than digit on position 1,
// rotate digit on position 2 by 3 times,
// else rotate digit on position 3 by 2 times.
// 4
  if(x[4]>x[1])
    r(x[2],3);
  else
    r(x[3],2);  
//? If sum of digits on positions 1 and 2 is greater than 9,
// rotate digit on position 3 by 6 times,
// else rotate digit on position 5 by 3 times.
// 5
  if(x[1]+x[2]>9)
    r(x[3],6);
  else
    r(x[5],3);  
//? If digit on position 3 is greater than digit on position 2,
// rotate digit on position 1 by 2 times,
// else rotate digit on position 4 by 5 times.
// 6
  if(x[3]>x[2])
    r(x[1],2);
  else
    r(x[4],5);  
//? If digit on position 5 is greater than digit on position 3,
// rotate digit on position 2 by 1 times,
// else rotate digit on position 4 by 5 times.
// 7
  if(x[5]>x[3])
    r(x[2],1);
  else
    r(x[4],5);  
//? If sum of digits on positions 5 and 1 is greater than 10,
// rotate digit on position 4 by 7 times,
// else rotate digit on position 3 by 5 times.
// 8
  if(x[5]+x[1]>10)
    r(x[4],7);
  else
    r(x[3],5);  
//? If sum of digits on positions 5 and 4 is greater than 9,
// rotate digit on position 3 by 9 times,
// else rotate digit on position 2 by 4 times.
// 9
  if(x[5]+x[4]>9)
    r(x[3],9);
  else
    r(x[2],4);  
//? If sum of digits on positions 3 and 1 is greater than 8,
// rotate digit on position 2 by 8 times,
// else rotate digit on position 4 by 4 times.
// 10
  if(x[3]+x[1]>8)
    r(x[2],8);
  else
    r(x[4],4);  
//? If digit on position 5 is greater than digit on position 2,
// rotate digit on position 1 by 5 times,
// else rotate digit on position 3 by 8 times.
// 11
  if(x[5]>x[2])
    r(x[1],5);
  else
    r(x[3],8);  
//? If sum of digits on positions 1 and 4 is greater than 10,
// rotate digit on position 3 by 4 times,
// else rotate digit on position 5 by 1 times.
// 12
  if(x[1]+x[4]>10)
    r(x[3],4);
  else
    r(x[5],1);  
//? If digit on position 3 is greater than digit on position 5,
// rotate digit on position 2 by 1 times,
// else rotate digit on position 1 by 6 times.
// 13
  if(x[3]>x[5])
    r(x[2],1);
  else
    r(x[1],6);  
//? If sum of digits on positions 1 and 5 is greater than 9,
// rotate digit on position 3 by 3 times,
// else rotate digit on position 2 by 1 times.
// 14
  if(x[1]+x[5]>9)
    r(x[3],3);
  else
    r(x[2],1);  
//? If digit on position 5 is greater than digit on position 1,
// rotate digit on position 4 by 8 times,
// else rotate digit on position 2 by 1 times.
// 15
  if(x[5]>x[1])
    r(x[4],8);
  else
    r(x[2],1);  
//? If digit on position 4 is greater than digit on position 1,
// rotate digit on position 3 by 4 times,
// else rotate digit on position 5 by 4 times.
// 16
  if(x[4]>x[1])
    r(x[3],4);
  else
    r(x[5],4);  
//? If sum of digits on positions 3 and 1 is greater than 8,
// rotate digit on position 5 by 3 times,
// else rotate digit on position 2 by 6 times.
// 17
  if(x[3]+x[1]>8)
    r(x[5],3);
  else
    r(x[2],6);  
//? If digit on position 3 is greater than digit on position 4,
// rotate digit on position 2 by 3 times,
// else rotate digit on position 1 by 5 times.
// 18
  if(x[3]>x[4])
    r(x[2],3);
  else
    r(x[1],5);  
//? If digit on position 5 is greater than digit on position 4,
// rotate digit on position 2 by 7 times,
// else rotate digit on position 3 by 8 times.
// 19
  if(x[5]>x[4])
    r(x[2],7);
  else
    r(x[3],8);  
//? If digit on position 2 is greater than digit on position 4,
// rotate digit on position 5 by 9 times,
// else rotate digit on position 1 by 4 times.
// 20
  if(x[2]>x[4])
    r(x[5],9);
  else
    r(x[1],4);  
//? If sum of digits on positions 3 and 5 is greater than 10,
// rotate digit on position 4 by 1 times,
// else rotate digit on position 2 by 5 times.
// 21
  if(x[3]+x[5]>10)
    r(x[4],1);
  else
    r(x[2],5);  
//? If digit on position 4 is greater than digit on position 1,
// rotate digit on position 3 by 9 times,
// else rotate digit on position 2 by 9 times.
// 22
  if(x[4]>x[1])
    r(x[3],9);
  else
    r(x[2],9);  
//? If digit on position 5 is greater than digit on position 3,
// rotate digit on position 2 by 4 times,
// else rotate digit on position 1 by 6 times.
// 23
  if(x[5]>x[3])
    r(x[2],4);
  else
    r(x[1],6);  
//? If sum of digits on positions 3 and 4 is greater than 9,
// rotate digit on position 5 by 8 times,
// else rotate digit on position 2 by 5 times.
// 24
  if(x[3]+x[4]>9)
    r(x[5],8);
  else
    r(x[2],5);  
//? If sum of digits on positions 3 and 4 is greater than 10,
// rotate digit on position 5 by 2 times,
// else rotate digit on position 1 by 5 times.
// 25
  if(x[3]+x[4]>10)
    r(x[5],2);
  else
    r(x[1],5);  
//? If sum of digits on positions 5 and 4 is greater than 9,
// rotate digit on position 3 by 3 times,
// else rotate digit on position 1 by 8 times.
// 26
  if(x[5]+x[4]>9)
    r(x[3],3);
  else
    r(x[1],8);  
//? If digit on position 5 is greater than digit on position 2,
// rotate digit on position 1 by 4 times,
// else rotate digit on position 3 by 8 times.
// 27
  if(x[5]>x[2])
    r(x[1],4);
  else
    r(x[3],8);  
//? If digit on position 3 is greater than digit on position 1,
// rotate digit on position 5 by 6 times,
// else rotate digit on position 2 by 6 times.
// 28
  if(x[3]>x[1])
    r(x[5],6);
  else
    r(x[2],6);  
//? If digit on position 4 is greater than digit on position 5,
// rotate digit on position 1 by 6 times,
// else rotate digit on position 3 by 1 times.
// 29
  if(x[4]>x[5])
    r(x[1],6);
  else
    r(x[3],1);  
//? If sum of digits on positions 3 and 5 is greater than 10,
// rotate digit on position 2 by 5 times,
// else rotate digit on position 1 by 7 times.
// 30
  if(x[3]+x[5]>10)
    r(x[2],5);
  else
    r(x[1],7);  
//? If sum of digits on positions 5 and 2 is greater than 9,
// rotate digit on position 4 by 9 times,
// else rotate digit on position 3 by 5 times.
// 31
  if(x[5]+x[2]>9)
    r(x[4],9);
  else
    r(x[3],5);  
//? If sum of digits on positions 2 and 4 is greater than 10,
// rotate digit on position 3 by 1 times,
// else rotate digit on position 1 by 2 times.
// 32
  if(x[2]+x[4]>10)
    r(x[3],1);
  else
    r(x[1],2);  
//? If digit on position 3 is greater than digit on position 4,
// rotate digit on position 5 by 7 times,
// else rotate digit on position 2 by 1 times.
// 33
  if(x[3]>x[4])
    r(x[5],7);
  else
    r(x[2],1);  
//? If digit on position 2 is greater than digit on position 5,
// rotate digit on position 1 by 6 times,
// else rotate digit on position 4 by 2 times.
// 34
  if(x[2]>x[5])
    r(x[1],6);
  else
    r(x[4],2);  
//? If digit on position 2 is greater than digit on position 1,
// rotate digit on position 5 by 3 times,
// else rotate digit on position 4 by 4 times.
// 35
  if(x[2]>x[1])
    r(x[5],3);
  else
    r(x[4],4);  
//? If digit on position 5 is greater than digit on position 4,
// rotate digit on position 3 by 9 times,
// else rotate digit on position 1 by 9 times.
// 36
  if(x[5]>x[4])
    r(x[3],9);
  else
    r(x[1],9);  
//? If digit on position 1 is greater than digit on position 5,
// rotate digit on position 4 by 6 times,
// else rotate digit on position 2 by 5 times.
// 37
  if(x[1]>x[5])
    r(x[4],6);
  else
    r(x[2],5);  
//? If sum of digits on positions 1 and 5 is greater than 10,
// rotate digit on position 3 by 7 times,
// else rotate digit on position 2 by 4 times.
// 38
  if(x[1]+x[5]>10)
    r(x[3],7);
  else
    r(x[2],4);  
//? If sum of digits on positions 2 and 1 is greater than 9,
// rotate digit on position 3 by 7 times,
// else rotate digit on position 5 by 4 times.}
// 39
  if(x[2]+x[1]>9)
    r(x[3],7);
  else
    r(x[5],4);  



}

int main() { _
  cout<<getOrder()<<endl;
  return 0;
}
