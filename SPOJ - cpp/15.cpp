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
    int* lefttab = new int[y];
    int* rightab = new int[y];

    lefttab[0] = tab[0];
    rightab[y-1]=tab[y-1];

    for(int j=1;j<y;j++){
      lefttab[j]=lefttab[j-1]+tab[j];
      rightab[y-1-j]=rightab[y-j]+tab[y-1-j];
    }

    int count = 0;

    for(int j=0;j<y-1;j++){
      if(lefttab[j]==rightab[j+1]){
        count++;
      }
    }

    cout<<count<<endl;
  }
}
