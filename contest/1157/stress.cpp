#include <bits/stdc++.h>

using namespace std;

int main(int argc,char** argv) {
  char filename[50]="a";
  if(argc==2) strcpy(filename,argv[1]);
  
  char buf[50];
  sprintf(buf,"make %s",filename);	system(buf);
  sprintf(buf,"make %s2",filename);	system(buf);
  system("make gen");
  
  
  
  for (int i = 1 ;i<300; i++) {
    sprintf(buf,"gen %d > in",i);	system(buf);
    sprintf(buf,"%s < in > out",filename);	system(buf);
    sprintf(buf,"%s2 < in > out2",filename);	system(buf);
    #ifdef _WIN32
    system("fc /A /LB1 out out2 > compare.txt");
      
    ifstream InputFile;
    InputFile.open("compare.txt");
    string line;
    getline(InputFile, line);
    getline(InputFile, line);
    InputFile.close();
    if(line!="FC: no differences encountered") {
      cout<<"Mismatch: "<<i<<endl;
      cout<<"--> entrada:"<<endl;
      system("type in");
      cout<<"--> saida1:"<<endl;
      system("type out");
      cout<<"--> saida2:"<<endl;
      system("type out2");
      return 0;
    } else {
      cout<<"fine:"<<i<<endl;
    }
    
    
    #endif		
    #ifdef linux
    cout<<"Versao Linux nao implementada :("<<endl;
    return 0;
    #endif
  }
  return 0;
}
