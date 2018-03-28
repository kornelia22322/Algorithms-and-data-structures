#include <iostream>
#include <string>
using namespace std;


int main(){
  int n;
  cin>>n;
  cin.ignore();
  for(int i=0;i<n;i++){
    string x;
    getline(cin, x);
    string delimiter=" ";
    string token_one = x.substr(0, x.find(delimiter));
    string token_two = x.substr(x.find(delimiter)+1);
    int* array_one = new int[1001];
    int* array_two = new int[1001];
    int* array_three = new int[1001];

    for(int j=0;j<1001;j++){
      array_one[j] = 0;
      array_two[j] = 0;
      array_three[j] = 0;
    }

    int a = token_one.length();
    int b = token_two.length();
    int j = 1000;;
    for(int s=a-1;s>=0;s--){
      array_one[j]=token_one[s]-'0';
      j--;
    }

    j = 1000;
    for(int s=b-1;s>=0;s--){
      array_two[j]=token_two[s]-'0';
      j--;
    }

    int p = 0;
    for(int j=1000;j>=0;j--){
      array_three[j] = (array_one[j]+array_two[j])%10+p;
      p = (array_one[j]+array_two[j])/10;
    }
    bool start = false;
    for(int j=0;j<1001;j++){
      if(!start && array_three[j]!=0){
        start = true;
      }
      if(start){
        cout<<array_three[j];
      }
    }

    if(!start) cout<<"0";

    cout<<endl;
  }
}
