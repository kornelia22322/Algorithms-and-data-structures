#include <iostream>
#include <string>

using namespace std;

int main(){
  int n;
  cin>>n;
  for(int i=0;i<n;i++){
    int** array = new int*[9];
    for(int j=0;j<9;j++){
      array[j]=new int[9];
    }
    for(int j=0;j<9;j++){
      for(int z=0;z<9;z++){
      cin>>array[j][z];
      }
    }

    bool* arrayb = new bool[9];
    for(int j=0;j<9;j++){
      arrayb[j] = false;
    }

    bool ind = false;

    for(int j=0;j<9;j++){
      for(int z=0;z<9;z++){
        if(arrayb[array[j][z]-1]){
          ind = true;
          break;
        }
        else {
          arrayb[array[j][z]-1] = true;
        }
      }
      for(int z=0;z<9;z++){
        arrayb[z] = false;
      }
    }

    for(int z=0;z<9;z++){
      arrayb[z] = false;
    }

    for(int j=0;j<9;j++){
      for(int z=0;z<9;z++){
        if(arrayb[array[z][j]-1]){
          ind = true;
          break;
        }
        else {
          arrayb[array[z][j]-1] = true;
        }
      }
      for(int z=0;z<9;z++){
        arrayb[z] = false;
      }
    }

    int start = 0;
    for(int j=0;j<3;j++){
      int col = 0;
        for(int w=0;w<3;w++){
        for(int z = start; z<start+3; z++){
          for(int m = col; m<col+3; m++){
            if(arrayb[array[z][m]-1]){
              ind = true;
              break;
            }
            else {
              arrayb[array[z][m]-1] = true;
            }

          }
        }

        for(int z=0;z<9;z++){
          arrayb[z] = false;
        }
        col += 3;
        }
        for(int z=0;z<9;z++){
          arrayb[z] = false;
        }
      start+=3;
    }


    if(ind) {
      cout<<"NIE"<<endl;
    }
    else {
      cout<<"TAK"<<endl;
    }
  }
}
