#include <iostream>
#include <math.h>
#include <string>


using namespace std;

int count_ones(int x){
  int number = 0;
  while(x!=0){
    number += x%2;
    x=x/2;
  }

  return number;
}

string* convert(int* array){
  string* arr = new string[32];
  for(int i=0;i<4;i++){
    for(int j=0;j<8;j++){
        arr[31-i*8+j] = to_string(array[4-i]%2);
        array[4-i]=array[4-i]/2;
    }
  }

  for(int i=0;i<32;i++){
    cout<<arr[i];
  }

  return arr;
}


int main() {

  int* arrayip = new int [8];
  int n;
  cin>>n;
  for(int i=0;i<n;i++){
    for(int j=0;j<8;j++){
      cin>>arrayip[j];
    }
    /*
    int one_counter = 0;
    for(int z=4;z<8;z++){
      if(arrayip[z]==255){
        one_counter +=8;
      } else {
        one_counter += count_ones(arrayip[z]);
      }
    }
    if(one_counter == 0) {
      cout<<"0";
    } else {
      int number_of_address = pow(2.0, (32.0-one_counter))-2;
      cout<<number_of_address;
    }
    */
  }

  int* first_array = new int[4];
  for(int i=0;i<4;i++){
    first_array[i]=arrayip[i];
  }

  int* second_array = new int[4];
  for(int i=4;i<8;i++){
    second_array[i]=arrayip[i];
  }

  string* array = convert(second_array);


}
