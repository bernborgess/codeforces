/**
 *    author:  bernborgess
 *    created: 20.December.2021 13:03:50
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
#define debug(x) cout << #x << " = " << x << endl

typedef long long ll;
typedef pair<int,int> pii;
const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;

const int MAX = 2e5+10;
vector<int> a(MAX);
vector<int> cnt(MAX);

int main() { _
  int t;  cin>>t;
  int n;
  while(t--) {
    cin>>n;
    fill(cnt.begin(),cnt.begin()+n+1,0);
    // manter elementos e soma
    for(int i=0;i<n;i++) {  cin>>a[i];  cnt[a[i]]++;  }
    ll ops=0LL;
    priority_queue<int> pq;
    for(int i=0;i<=n;i++) {
      // falha se nao ha elemento anterior
      if(pq.empty()&&i>0) ops=-1;
      if(ops==-1) {
        cout<<ops<<' ';
        continue;
      }
      // numero de operacoes: diferenca do elemento
      // mais proximo na pq e i atual
      if(i>0) {
        ops+=(i-1)-pq.top(); pq.pop();
      }
      // encher anterior + tirar os atuais
      cout<<ops+cnt[i]<<' ';
      // por na pq os elementos usados
      for(int j=0;j<cnt[i];j++) pq.push(i);
    }
    cout<<endl;
  }
  return 0;
}

