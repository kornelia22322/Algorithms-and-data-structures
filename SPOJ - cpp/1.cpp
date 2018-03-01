#include <iostream>

using namespace std;

int main(){
  int n;
  cin>>n;
  for(int i=0;i<n;i++){
    int a;
    cin>>a;
    int start = 0;
    int* array = new int[a];
    while(start!=a){
      cin>>array[start];
      start++;
    }

    if(a==1) {
      cout<<1<<"\n";
      continue;
    }

    int* leftArray = new int[a];
    int* rightArray = new int[a];
    leftArray[0] = array[0];
    rightArray[a-1] = array[a-1];
    for(int j=1;j<a;j++){
      leftArray[j]=leftArray[j-1]+array[j];
      rightArray[a-1-j]=rightArray[a-j]+array[a-1-j];
    }
    bool check = false;
    for(int j=0;j<a-1;j++){
      if(leftArray[j]==rightArray[j+1]){
        check = true;
        cout<<j+1<<"\n";
        break;
      }
    }

    if(!check){
      cout<<0<<"\n";
    }
  }
}
