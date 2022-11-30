#include <bits/stdc++.h>

using namespace std;

int main(int argc,char** argv) {
  int scases = 1, ecases = 30;
  if(argc>=2) scases=stoi(argv[1]);
  if(argc>=3) ecases=stoi(argv[2]);
  
  char buf[50];
  
  for (int i=scases; i<=ecases; i++) {
    sprintf(buf,"gen %d > in",i);	system(buf);
    system("solve < in > out");
    #ifdef _WIN32

    ifstream InputFile;
    InputFile.open("out");
    string line;
    getline(InputFile, line);
    InputFile.close();
    if(line=="NO") {
      cout<<"No caseMismatch: "<<i<<endl;
      cout<<"--> entrada:"<<endl;
      system("type in");
      cout<<"--> saida1:"<<endl;
      system("type out");
      return 0;
    } else {
      system("cls");
      cout<<"not at:"<<i<<endl;
    }
    
    
    #endif		
    #ifdef linux
    cout<<"Versao Linux nao implementada :("<<endl;
    return 0;
    #endif
  }
  return 0;
}
