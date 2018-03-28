#include <iostream>
#include <string>

using namespace std;

bool checkEquality(string first, string second){
  int x = first.length();
  int y = second.length();
  if(x!=y) return false;
  for(int i=x-1;i>=0;i--){
    if(first[i]!=second[i]){
      return false;
    }
  }
  return true;
}

bool checkLower(string first, string second){
  int x = first.length();
  int y = second.length();
  if(x<y) return true;
  if(y>x) return false;
  for(int i=0;i<x;i++){
    if(first[i]<second[i]){
      return true;
    } else if(first[i]>second[i]) {
      return false;
    }
  }
  return true;
}

int main(){
  string first, sign, second;
  bool equals;
  while(cin>>first>>sign>>second){
      if(sign=="=="){
        equals = checkEquality(first, second);
      } else if (sign=="!=") {
        equals = !checkEquality(first, second);
      } else if (sign=="<=") {
        equals = checkLower(first, second);
        if(!equals) {
          equals = checkEquality(first, second);
        }
      } else if (sign==">=") {
        equals = !checkLower(first, second);
        if(!equals) {
          equals = checkEquality(first, second);
        }
      }

      cout<<equals<<endl;
  }
}
