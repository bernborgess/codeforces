#include <iostream>
using namespace std;
typedef long long ll;


int main() {
  int fact[12]; fact[0]=1;
  for(int i=1;i<12;i++) fact[i]=i*fact[i-1];
  int t; cin>>t;
  string s;
  int keys,n;
  while(t--) {
    string s;
    cin>>s; n=s.size();
    if(n>10) {cout<<0<<endl; continue;}
    keys=10-n;
    bool isUpper=false;
    for(int i=0;i<n;i++)
    if(isupper(s[i])!=isUpper) {
      isUpper=!isUpper;
      keys--;
    }
    if(keys<0) {cout<<0<<endl; continue;}
    if(keys==0) {cout<<1<<endl; continue;}
    keys/=2;
    int ans = fact[n+keys] / ( fact[keys] * fact[n] );
    cout<<ans<<endl;
  }
  return 0;
}


