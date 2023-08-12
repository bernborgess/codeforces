#include <iostream>
#include <cstdlib>
using namespace std;
typedef long long ll;

const int MAX = 1e8+10;

int main() {
  int k;
  ll n,a;
  string b;
  cin>>k>>n;
  
  int* DP[2];
  DP[0]=(int*)calloc(k,sizeof(int));
  DP[1]=(int*)calloc(k,sizeof(int));
  if((DP[0]== NULL)||(DP[1]==NULL))exit(-1);
  
  cout<<hex;
  bool z=false;
  for(ll i=0;i<n;i++,z^=1) {
	cin>>b; a=0;
	for(int i=0;i<b.size();i++)
		a=(a*10+(b[i]-'0'))%k;
      
    DP[z][a]=true;
    for(ll j=0;j<k;j++) 
		if(!DP[z][j])
			if(DP[!z][j]||(DP[!z][(j>=a?j-a:j+(k-a))]))
				DP[z][j]=true;
  
    if(DP[z][0]) break;
  }
  cout<<(DP[0][0]||DP[1][0]?"YES":"NO")<<endl;

  return 0;
}


