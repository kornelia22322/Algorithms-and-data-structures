#include <iostream>

using namespace std;

int main(){
  int x;
  int y;
  int r;
  int n;
  cin>>x>>y>>r;
  cin>>n;
  for(int i=0;i<n;i++){
    int xc;
    int yc;
    cin>>xc>>yc;
    int rc_quadr = (xc-x)*(xc-x) + (yc-y)*(yc-y);
    int rquadr = r*r;
    if(rc_quadr == rquadr){
      cout<<"E"<<endl;
    } else if(rc_quadr < rquadr){
      cout<<"I"<<endl;
    } else  {
      cout<<"O"<<endl;
    }
  }
}
