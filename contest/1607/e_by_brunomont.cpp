#include <bits/stdc++.h>

using namespace std;

#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define endl '\n'

typedef long long ll;

const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;

int main() { _
	int t; cin >> t;
	while (t--) {
		int n, m; cin >> n >> m;
		int x = 0, y = 0;
		int mx = 0, Mx = 0;
		int my = 0, My = 0;
		string s; cin >> s;
		pair<int, int> ans = {1, 1};
		for (char c : s) {
			if (c == 'L') x--;
			if (c == 'R') x++;
			if (c == 'D') y++;
			if (c == 'U') y--;

			mx = min(mx, x);
			Mx = max(Mx, x);
			my = min(my, y);
			My = max(My, y);

			if (Mx-mx+1 > m) break;
			if (My-my+1 > n) break;

			//cout << "fiz " << c << endl;

			ans = {-my+1, -mx+1};
		}
		cout << ans.first << " " << ans.second << endl;
	}
	exit(0);
}