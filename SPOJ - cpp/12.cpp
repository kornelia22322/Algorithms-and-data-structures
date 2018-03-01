#include <iostream>
#include <string>

using namespace std;

int main(){
  string tab[]={"+","-","*","/","%"};
  int rej[10];
  for(int i=0;i<10;i++){
    rej[i]=0;
  }
  int x;
  int y;
  string output;
  int output2;
  while(cin>>output>>x>>y){
      if(output=="+"){
        output2=rej[x]+rej[y];
      } else if(output=="-") {
        output2=rej[x]-rej[y];
      } else if(output=="*") {
        output2=rej[x]*rej[y];;
      } else if(output=="/") {
        output2=rej[x]/rej[y];
      } else if(output=="%") {
        output2 =rej[x]%rej[y];
      } else if(output =="z"){
        rej[x]=y;
      }
      if(output!="z"){
      cout<<output2<<endl;
      }
  }
}
