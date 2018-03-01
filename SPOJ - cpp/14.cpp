#include <iostream>
#include <string>

using namespace std;

int main(){
  int x;
  cin>>x;
  for(int i=0;i<x;i++){
    int y;
    cin>>y;
    int* tab = new int[y];
    for(int j=0;j<y;j++){
      cin>>tab[j];
    }

    if(y==1){
      cout<<tab[0];
    }
    else{
      for(int j=1;j<y;j+=2){
        cout<<tab[j]<<" ";
      }
      for(int j=0;j<y;j+=2){
        cout<<tab[j]<<" ";
      }
      cout<<endl;
    }
  }
}
