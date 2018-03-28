#include <iostream>
#include <string>

using namespace std;


int main(){
  string x;
  bool stack_empty = true;
  bool stack_full = false;
  int* tab = new int[10];
  int top = -1;

  for(int i=0;i<10;i++){
    tab[i] = 0;
  }

  while(cin>>x){
    if(x=="+"){
      int y;
      cin>>y;
      if(top!=9){
        top++;
        tab[top] = y;
        cout<<":)"<<endl;
      } else {
        cout<<":("<<endl;
      }
    }
    else if(x=="-"){
      if(top!=-1){
        cout<<tab[top]<<endl;
        tab[top] = 0;
        top--;
      } else {
        cout<<":("<<endl;
      }
    }
  }
}
