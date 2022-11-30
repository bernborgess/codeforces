/**
 *    author:  bernborgess
 *    problem: 1302f - 09-03-2022
 *    created: 09.March.2022 10:10:50
 **/
#include <bits/stdc++.h>

using namespace std;

#define _                       \
  ios_base::sync_with_stdio(0); \
  cin.tie(0);
#define fst first
#define snd second
#define pbk push_back
#define lob lower_bound  // iterator for first el not less than x
#define upb upper_bound  // iterator for first el bigger than x
#define mkp make_pair
#define mkt make_tuple
#define uset unordered_set
#define umap unordered_map
#define bs bitset
#define sqr(a) (a) * (a)
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
typedef pair<int, int> pii;
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

void manip(vector<int>& x,int i) {
  // 0
  if(!!(i&(1<<0))^(x[1] + x[4] > 10))
    r(x[1], 3);
  else
    r(x[4], 8);

  // 1
  if(!!(i&(1<<1))^(x[3] + x[2] > 8))
    r(x[4], 9);
  else
    r(x[5], 8);

  // 2
  if(!!(i&(1<<2))^(x[3] % 2 == 1))
    r(x[3], 3);
  else
    r(x[3], 4);

  // 3
  if(!!(i&(1<<3))^(x[5] > x[2]))
    r(x[4], 1);
  else
    r(x[2], 7);

  // 4
  if(!!(i&(1<<4))^(x[1] % 2 == 1))
    r(x[1], 3);
  else
    r(x[3], 5);

  // 5
  if(!!(i&(1<<5))^(x[4] % 2 == 1))
    r(x[4], 7);
  else
    r(x[1], 9);

  // 6
  if(!!(i&(1<<6))^(x[4] > x[1]))
    r(x[4], 9);
  else
    r(x[4], 2);

  // 7
  if(!!(i&(1<<7))^(x[1] > x[3]))
    r(x[2], 1);
  else
    r(x[3], 1);

  // 8
  if(!!(i&(1<<8))^(x[5] > x[3]))
    r(x[4], 5);
  else
    r(x[5], 8);

  // 9
  if(!!(i&(1<<9))^(x[1] + x[3] > 8))
    r(x[4], 5);
  else
    r(x[2], 5);

  // 10
  if(!!(i&(1<<10))^(x[1] > x[4]))
    r(x[4], 3);
  else
    r(x[2], 3);

  // 11
  if(!!(i&(1<<11))^(x[3] + x[1] > 9))
    r(x[2], 9);
  else
    r(x[2], 2);

  // 12
  if(!!(i&(1<<12))^(x[4] + x[3] > 10))
    r(x[4], 7);
  else
    r(x[5], 7);

  // 13
  if(!!(i&(1<<13))^(x[3] > x[2]))
    r(x[3], 2);
  else
    r(x[4], 6);

  // 14
  if(!!(i&(1<<14))^(x[1] > x[3]))
    r(x[1], 9);
  else
    r(x[2], 9);

  // 15
  if(!!(i&(1<<15))^(x[3] % 2 == 1))
    r(x[3], 9);
  else
    r(x[1], 5);

  // 16
  if(!!(i&(1<<16))^(x[3] + x[5] > 9))
    r(x[3], 4);
  else
    r(x[3], 9);

  // 17
  if(!!(i&(1<<17))^(x[3] > x[1]))
    r(x[5], 1);
  else
    r(x[5], 7);

  // 18
  if(!!(i&(1<<18))^(x[1] > x[3]))
    r(x[2], 9);
  else
    r(x[4], 6);

  // 19
  if(!!(i&(1<<19))^(x[2] + x[3] > 10))
    r(x[2], 2);
  else
    r(x[3], 6);
}

// 1100100111000011110
int getOrder() {
  vector<int> x = {0, 0, 0, 0, 0, 0};
  vector<int> xF = {0, 6, 1, 3, 7, 6};
  vector<int> y = {0, 1, 2, 3, 4, 5};
  vector<int> yF = {0, 0, 7, 7, 6, 9};
  int i = 0;
  bool done;

  for (; i < (1 << 20); i++) {
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

// 1100100111000011110
void solve(vector<int>&x) {
  // If sum of digits on positions 1 and 4 is greater than 10,
  // rotate digit on position 1 by 3 times,
  // else rotate digit on position 4 by 8 times.
  if (x[1] + x[4] > 10) 
    r(x[1], 3);
  else
    r(x[4], 8);

  // If sum of digits on positions 3 and 2 is greater than 8,
  // rotate digit on position 4 by 9 times,
  // else rotate digit on position 5 by 8 times.
  // ! INVERT
  if (x[3] + x[2] > 8)
    r(x[5], 8);
  else
    r(x[4], 9);

  // If digit on position 3 is odd,
  // rotate digit on position 3 by 3 times,
  // else rotate digit on position 3 by 4 times.
  // ! INVERT
  if (x[3] % 2 == 1)
    r(x[3], 4);
  else
    r(x[3], 3);

  // If digit on position 5 is greater than digit on position 2,
  // rotate digit on position 4 by 1 times,
  // else rotate digit on position 2 by 7 times.
  // ! INVERT
  if (x[5] > x[2])
    r(x[2], 7);
  else
    r(x[4], 1);

  // If digit on position 1 is odd,
  // rotate digit on position 1 by 3 times,
  // else rotate digit on position 3 by 5 times.
  // ! INVERT
  if (x[1] % 2 == 1)
    r(x[3], 5);
  else
    r(x[1], 3);

  // If digit on position 4 is odd,
  // rotate digit on position 4 by 7 times,
  // else rotate digit on position 1 by 9 times.
  if (x[4] % 2 == 1)
    r(x[4], 7);
  else
    r(x[1], 9);

  // If digit on position 4 is greater than digit on position 1,
  // rotate digit on position 4 by 9 times,
  // else rotate digit on position 4 by 2 times.
  if (x[4] > x[1])
    r(x[4], 9);
  else
    r(x[4], 2);

  // If digit on position 1 is greater than digit on position 3,
  // rotate digit on position 2 by 1 times,
  // else rotate digit on position 3 by 1 times.
  if (x[1] > x[3])
    r(x[2], 1);
  else
    r(x[3], 1);

  // If digit on position 5 is greater than digit on position 3,
  // rotate digit on position 4 by 5 times,
  // else rotate digit on position 5 by 8 times.
  if (x[5] > x[3])
    r(x[4], 5);
  else
    r(x[5], 8);

  // If sum of digits on positions 1 and 3 is greater than 8,
  // rotate digit on position 4 by 5 times,
  // else rotate digit on position 2 by 5 times.
  //! INVERT
  if (x[1] + x[3] > 8)
    r(x[2], 5);
  else
    r(x[4], 5);

  // If digit on position 1 is greater than digit on position 4,
  // rotate digit on position 4 by 3 times,
  // else rotate digit on position 2 by 3 times.
  //! INVERT
  if (x[1] > x[4])
    r(x[2], 3);
  else
    r(x[4], 3);

  // If sum of digits on positions 3 and 1 is greater than 9,
  // rotate digit on position 2 by 9 times,
  // else rotate digit on position 2 by 2 times.
  //! INVERT
  if (x[3] + x[1] > 9)
    r(x[2], 2);
  else
    r(x[2], 9);

  // If sum of digits on positions 4 and 3 is greater than 10,
  // rotate digit on position 4 by 7 times,
  // else rotate digit on position 5 by 7 times.
  if (x[4] + x[3] > 10)
    r(x[4], 7);
  else
    r(x[5], 7);

  // If digit on position 3 is greater than digit on position 2,
  // rotate digit on position 3 by 2 times,
  // else rotate digit on position 4 by 6 times.
  if (x[3] > x[2])
    r(x[3], 2);
  else
    r(x[4], 6);

  // If digit on position 1 is greater than digit on position 3,
  // rotate digit on position 1 by 9 times,
  // else rotate digit on position 2 by 9 times.
  //! INVERT
  if (x[1] > x[3])
    r(x[2], 9);
  else
    r(x[1], 9);

  // If digit on position 3 is odd,
  // rotate digit on position 3 by 9 times,
  // else rotate digit on position 1 by 5 times.
  if (x[3] % 2 == 1)
    r(x[3], 9);
  else
    r(x[1], 5);

  // If sum of digits on positions 3 and 5 is greater than 9,
  // rotate digit on position 3 by 4 times,
  // else rotate digit on position 3 by 9 times.
  if (x[3] + x[5] > 9)
    r(x[3], 4);
  else
    r(x[3], 9);

  // If digit on position 3 is greater than digit on position 1,
  // rotate digit on position 5 by 1 times,
  // else rotate digit on position 5 by 7 times.
  //! INVERT
  if (x[3] > x[1])
    r(x[5], 7);
  else
    r(x[5], 1);

  // If digit on position 1 is greater than digit on position 3,
  // rotate digit on position 2 by 9 times,
  // else rotate digit on position 4 by 6 times.
  //! INVERT
  if (x[1] > x[3])
    r(x[4], 6);
  else
    r(x[2], 9);

  // If sum of digits on positions 2 and 3 is greater than 10,
  // rotate digit on position 2 by 2 times,
  // else rotate digit on position 3 by 6 times.
  if (x[2] + x[3] > 10)
    r(x[2], 2);
  else
    r(x[3], 6);
}

int main() { _
  string s;
  cin >> s;
  vector<int>x(6);

  for (int i = 1; i <= 5; i++) 
    x[i] = s[i - 1] - '0';

  solve(x);
  debugX(x);

  return 0;
}

