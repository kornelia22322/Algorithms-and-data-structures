#include <iostream>
#include <string>

using namespace std;

string map[] = {"a", "b", "c", "d", "e", "f", "g", "h", "i", "j"};

int main(){
  int a;
  cin>>a;
  bool* array = new bool[a];

}


void recursive(string word, int i, string[] map, int n){
  if(i==n){
    cout<<word;
  }
  for(int i=0;i<n;i++){
    array[i] = true;
    return recursive(word+map[i], i++, array, n);
  }
  }
  else
    return recursive(word, i++, array, n);
}
