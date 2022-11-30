#include <bits/stdc++.h>
#define ll long long
using namespace std;
 
int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr); cout.tie(nullptr);
	ll n, t; cin >> n >> t;
	vector<ll> pos, neg;
	for (int i = 0; i < n; ++i) {
		ll x; cin >> x;
		if (x < 0) neg.emplace_back(-x);
		else pos.emplace_back(x);
	}
	sort(neg.begin(), neg.end());
	sort(pos.begin(), pos.end());
	ll ans = 0;
	for (int i = 0; i < neg.size(); ++i) {
		if (neg[i] > t) break;
		ll maxd = t - neg[i] - neg[i];
		ll res = 0;
		if (maxd > 0) res = upper_bound(pos.begin(), pos.end(), maxd) - pos.begin();
		ans = max(ans, i + res + 1);
	}
	for (int i = 0; i < pos.size(); ++i) {
		if (pos[i] > t) break;
		ll maxd = t - pos[i] - pos[i];
		ll res = 0;
		if (maxd > 0) res = upper_bound(neg.begin(), neg.end(), maxd) - neg.begin();
		ans = max(ans, i + res + 1);
	}
	cout << ans;
}