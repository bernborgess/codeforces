#include <iostream>

using namespace std;

typedef long long ll;

bool eval(string b) {
  if(b=="true") return true;
  if(b=="false") return false;
  int n = stoi(b);
  return !!n;
}

int main() {
  int n; cin>>n;
  while(n--) {
    string _, b1, b2;
    //   while (  b1  )  {  if (  b2  )  break; } 
    cin>>_>>   _>>b1>>_>>_>>_>>_>>b2>>_>>_    >>_;
    bool v1,v2;
    v1 = eval(b1);
    v2 = eval(b2);
    cout<<(!v1||v2?"YES":"NO")<<endl;
  }
  return 0;
}


