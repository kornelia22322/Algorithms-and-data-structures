#include <iostream>

using namespace std;

/* Roll w miejscu */

void swap(int &a, int &b){
  int c = b;
  b = a;
  a = c;
}

int main(){
    int a;
    cin>>a;
    int k;
    cin>>k;
    int start = 0;
    int* array = new int[a];
    while(start!=a){
      cin>>array[start];
      start++;
    }

    for(int i=0;i<(a/2);i++){
      swap(array[i], array[a-1-i]);
    }

    for(int i=0;i<=(a-1-k)/2;i++){
      swap(array[i], array[a-1-k-i]);
    }

    int j = 0;
    for(int i=a-k;i<(a-k)+k/2;i++){
      swap(array[i], array[a-1-j]);
      j++;
    }
    for(int i=0;i<a;i++){
      cout<<array[i]<<" ";
    }

}
