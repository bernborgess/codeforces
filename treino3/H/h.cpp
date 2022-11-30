#include<bits/stdc++.h>

 #define f first
 #define s second
 #define pb push_back


using namespace std;
typedef pair<int,int> pii;
typedef long long ll;
const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;




int main ()
{
    ios::sync_with_stdio(0);
cin.tie(0);

int n;
 int m;
 cin>>n>>m;
 ll maior=-1;
 pii maiorPar;
 vector<vector<int> > matriz (n,vector<int>(m));
 for(int i=0;i<n;i++)
 {
     for(int j=0;j<m;j++)
     {
         cin>>matriz[i][j];
         if(matriz[i][j]>maior)
         {
             maior=matriz[i][j];

             maiorPar=pii(i,j);
         }
     }
 }
 maior=-1;
 pii maiorPar2;
for(int i=0;i<m;i++)
 {

     for(int j=0;j<n;j++)
     {
         if(matriz[j][i]>maior and j!=maiorPar.f)
         {

             maior=matriz[j][i];
             maiorPar2=pii(j,i);
         }
     }

 }
 cout<<maiorPar.f+1<<" "<<maiorPar2.s+1<<endl;
 return 0;
}
