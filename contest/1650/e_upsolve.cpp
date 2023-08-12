/**
 *    author:  bernborgess
 *    problem: e_upsolve - 1650
 *    created: 08.March.2022 18:17:10
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

/*
? 1650E - Rescheduling the Exam
To begin with, we will learn how to find the optimal place for the exam 
that we want to move. Let's imagine that it is not in the schedule, in 
this case we have two options:

* Put the exam at the end of the session so that there are d−an−1 days before it.
* Put it in the middle of the largest break between exams ((let its length be mx),
  so that between it and the nearest one there is ⌊(mx−1)/2⌋, because this is no worse
  than putting it in any part of any other break.

That is, the answer for such an arrangement is  — 
! the minimum of the larger of these options and the minimum break, 
in schedule without the moved exam.

Now note that the minimum break in most variants is the same 
! — minimum in the initial schedule.
So in order to maximize μ, you need to move exactly 
one of the two exams that form it and you need to check which of the two options is better.

*/
int d;

int reschedule(vector<int>&a,int forget) {
  int m=INF,M=0,n=a.size();
  for(int i=1;i<n;i++) {
    if(i==forget) continue;
    m=min(m,a[i]-a[(i==forget+1?i-2:i-1)]-1);
    M=max(M,a[i]-a[(i==forget+1?i-2:i-1)]-1);
  }
  // put in the back, put in the middle of M
  return min(m,max(d-a[n-1==forget?n-2:n-1]-1,(M-1)/2));
}


int main() { _
  int t;  cin>>t;
  int n,m,mi;
  while(t--) {
    cin>>n>>d;
    m=d;mi=-1;
    vector<int>a(n+1,0);
    for(int i=1;i<=n;i++) {
      cin>>a[i];
      if(a[i]-a[i-1]-1<m) {
        m=a[i]-a[i-1]-1;
        mi=i;
      }
    }
    int ans = reschedule(a,mi);
    if(mi>1) ans=max(ans,reschedule(a,mi-1));
    cout<<ans<<endl;
  }
  return 0;
}

