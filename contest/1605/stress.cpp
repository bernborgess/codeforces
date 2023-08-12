#include <bits/stdc++.h>

using namespace std;

string get_abc_string(int x) {
  string out;
  x+=6561;
  while(x>3) {
    out.push_back(x%3+'a');
    x/=3;
  }
  out += " 7 1";
  reverse(out.begin(),out.end());
  return out;
}

int main(int argc,char** argv) {
  char filename[50]="a";
  if(argc>=2) strcpy(filename,argv[1]);
  int cases = 30;
  if(argc>=3) cases=stoi(argv[2]);
  
  char buf[50];
  sprintf(buf,"make %s",filename);	system(buf);
  sprintf(buf,"make %s2",filename);	system(buf);
  system("make gen");
  
  string testS;
  char test[50];

  for (int i=0; i<pow(3,7); i++) {
    testS = get_abc_string(i);
    strcpy(test, testS.c_str());
    sprintf(buf,"echo %s > in",test);	system(buf);
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
