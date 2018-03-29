#include <iostream>
#include <string>

using namespace std;

int main(){
  string output;
  int x;
  cin>>x;
  for(int i=0;i<x;i++){
    int y;
    string z;
    cin>>y>>z;
    bool first = true;
    string output;
    output="1";
    for(char& c : z) {
        if(c=='?' && first && y==1){
          output="10";
          first=false;
        } else if(c=='?' && first && y!=1) {
          output="9";
          first=false;
        } else if(c=='?'){
          output+="0";
        }
        first=false;
    }

    cout<<output<<endl;
  }
}
