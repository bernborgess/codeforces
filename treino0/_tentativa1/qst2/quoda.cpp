#include<bits/stdc++.h>

#define f first
#define s second
#define pb push_back

using namespace std;
typedef pair<int,int> pii;
typedef long long ll;
const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;
int n;
int t;
vector<int> v;

int main ()
{
    ios::sync_with_stdio(0);
	cin.tie(0);
	int n;
	int t;
	cin>>n>>t;
	v.resize(n);
	int menorq0=0;
	int maiorq0=0;
	int iguala0=0;
	for(int i=0;i<n;i++)
	{
		int a;
		cin>>a;
		if(abs(a)<=t){v[i]=a;
	 
		}
	}
	int quantos=1;
	int maior=0;
	int tempo=t;
	int l=0;
	int r=1;
	
	while(true)
	{
		if(abs(v[r]-v[r-1])<=tempo){	quantos++; tempo-=abs(v[r]-v[l]); r++;	}
		else{	l++; maior=max(maior,quantos); tempo+=abs(v[l]-v[l-1]); quantos--;	}
	 
		if(r==n){break;}
	}
	 
	cout<<maior<<endl;
	return 0;
}