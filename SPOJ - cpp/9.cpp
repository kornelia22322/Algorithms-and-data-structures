#include <iostream>
#include <string>

using namespace std;

int main(){
  string x;
  while(cin>>x){
    int length = x.length();
    for(int i=length-1;i>=0;i--){
      cout<<x[i];
    }
    cout<<endl;
  }
}
