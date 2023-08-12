#include <bits/stdc++.h>

using namespace std;

#define _                       \
  ios_base::sync_with_stdio(0); \
  cin.tie(0);
#define fst first
#define snd second
#define pb push_back
#define dbg(x) cout << #x << " = " << x << endl

typedef long long ll;
const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;

bool over(int x, int y)
{
  return ((y < 2) or
          (x == 0 and y < 22) or
          (x == 1 and y < 12));
}

void mov1(int* x, int* y) {
  *y = (*y)-22;
}

void mov2(int* x, int* y) {
  *x = (*x)-1;
  *y = (*y)-12;
}

void mov3(int* x, int* y) {
  *x = (*x)-2;
  *y = (*y)-2;
}

int main()
{
  _ int x, y;
  string names[2] = {"Ciel","Hanako"};
  cin >> x >> y;
  int k = min(x / 2, y / 24);
  x -= 2 * k, y -= 24 * k;
  if (over(x,y)) {
    cout<<"Hanako"<<endl;
  } else {
    // ciel 0 hanako 1
    bool turno=0;
    void (*moves[3])(int*,int*) = {mov1,mov2,mov3};
    while(!over(x,y)) {
      if(turno) { // hanako
        if(y>=22) {
          moves[0](&x,&y);
        } else if(y>=12) {
          moves[1](&x,&y);
        } else {
          moves[2](&x,&y);
        }
      } else { // ciel
        if(x>=2) {
          moves[2](&x,&y);
        } else if (x==1) {
          moves[1](&x,&y);
        } else {
          moves[0](&x,&y);
        }
      }
      turno = !turno;
    }

    cout <<names[!turno]<< endl;
  }

  return 0;
}
