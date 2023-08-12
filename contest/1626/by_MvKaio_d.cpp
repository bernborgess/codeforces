#include <bits/stdc++.h>
using namespace std;

#define fast_io ios_base::sync_with_stdio(0);cin.tie(0);
#define endl '\n'

typedef long long ll;

const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fLL;

void test_case() {
  int n;
  cin >> n;

  vector<int> f(n + 1, 0);
  for (int i = 0; i < n; i++) {
    int x; cin >> x;
    f[x]++;
  } 
  
  // vetor de prefixos mantem a soma
  auto pref = f;
  for (int i = 1; i <= n; i++)
    pref[i] += pref[i-1];

  // funcao para recuperar a soma entre qualquer intervalo
  auto sum = [pref](int i, int j) {
    return pref[j] - (i ? pref[i-1] : 0);
  };
  
  // iterar em cada elemento da esquerda para direita (l)
  ll ans = LINF;
  for (int l = 0; l <= n; l++) {

    // iterar nas potencias de 2 menores que 2n.
    for (int pot = 1; (pot/2) <= n; pot *= 2) {

      int lo = l, hi = n;
      // busca binaria para encontrar
      // segmento com soma igual essa potencia
      while (lo < hi) {
        int mid = lo + (hi - lo + 1)/2;
        if (sum(l, mid) <= pot)
          lo = mid;
        else
          hi = mid - 1;
      }
      
      ll at = 0;
      vector<pair<int, int>> ranges = {{0, l - 1}, {l, lo}, {lo + 1, n}};
      
      for (auto [a, b] : ranges) if (a <= b) {
        if (sum(a, b) == 0) ++at;
        else {
          // log2()
          int lg = __lg(sum(a, b));
          // cout << a << ", " << b << ": " << sum(a, b) << endl;
          
          // menor lg tal que 2^lg >= sum(a,b)
          if ((1 << lg) != sum(a, b)) ++lg;

          // o quanto falta para atingir esta potencia.
          at += (1 << lg) - sum(a, b);
        }
      // range "degenerado"
      } else 
        ++at;
      
      // minimizar as faltas
      ans = min(ans, at);
    }
  }

  cout << ans << endl;

}

int main() { 
  fast_io;

  int t;
  cin >> t;
  while (t--) {
    test_case();
  }

  return 0;
}