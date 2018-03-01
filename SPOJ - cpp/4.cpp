#include <iostream>

using namespace std;


int main(){
    int a;
    cin>>a;

    int start = 0;
    int* array = new int[a];
    while(start!=a){
      cin>>array[start];
      start++;
    }

    int* arraytwo = new int[a];
    arraytwo[0] = array[0];

    for(int i=1;i<a;i++){
      arraytwo[i] = max(array[i], arraytwo[i-1]+array[i]);
    }

    int maxlcl = array[0];
    for(int i=1;i<a;i++){
      if(arraytwo[i]>maxlcl){
        maxlcl = arraytwo[i];
      }
    }
    if(maxlcl<0){
      maxlcl = 0;
    }
    cout<<maxlcl<<endl;
}
