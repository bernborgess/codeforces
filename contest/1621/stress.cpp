#include <bits/stdc++.h>

using namespace std;

int main(int argc,char** argv) {
  char filename[50]="b";
  if(argc>=2) strcpy(filename,argv[1]);
  int cases = 30;
  if(argc>=3) cases=stoi(argv[2]);
  
  char buf[50];
  sprintf(buf,"make %s",filename);	system(buf);
  sprintf(buf,"make %s_wa",filename);	system(buf);
  system("make gen");
  
  
  
  for (int i=1; i<=cases; i++) {
    sprintf(buf,"gen %d > in",i);	system(buf);
    sprintf(buf,"%s < in > out",filename);	system(buf);
    sprintf(buf,"%s_wa < in > out_wa",filename);	system(buf);
    #ifdef _WIN32
    system("fc /A /LB1 out out_wa > compare.txt");
      
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
