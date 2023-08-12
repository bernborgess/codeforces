#include <bits/stdc++.h>

using namespace std;

#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define fst first
#define snd second
#define pb push_back
#define dbg(x) cout << #x << " = " << x << endl

typedef long long ll;
const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;

/*
-1
"( (( <()))()>)"; encapsular 1
"((  ()  <()))()>"; recheio 1
"((<()))()>()"; sobra direita 1
"(()(<()))()>"; recheio 2
"()((<()))()>". sobra esquerda 1
*/
unsigned nChoosek( unsigned n, unsigned k );

int main() { _
	int n;	cin>>n;
	string s;	cin>>s;
	stack<int> q;
	int pe=0,pd=0;
	for(int i=0;i<s.size();i++) {
		if(s[i]=='(') 		q.push(i);
		else if(!q.empty()) q.pop();
		else				pe++;
	}
	pd = q.size();
	ll sobra = max(pd,pe);
	// cout<<pe<<" "<< pd<<" "<<s.size()<<endl;
	if(sobra==s.size())	cout<<0<<endl;
	else {
		int cebola = (s.size()-sobra)/2;
		cout<<3+nChoosek(cebola,cebola-1)<<endl;
	}
	return 0;
}

unsigned nChoosek( unsigned n, unsigned k )
{
    if (k > n) return 0;
    if (k * 2 > n) k = n-k;
    if (k == 0) return 1;

    int result = n;
    for( int i = 2; i <= k; ++i ) {
        result *= (n-i+1);
        result /= i;
    }
    return result;
}
