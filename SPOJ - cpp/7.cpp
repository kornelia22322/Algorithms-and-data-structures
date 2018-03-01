#include <iostream>
#include <string>

using namespace std;

int main(){
  int n;
  cin>>n;
  int a,b,c;
  cin>>a>>b>>c;
  int minatmp = a;
  int minbtmp = b;
  int minctmp = c;
  int mina, minb, minc;
  for(int i=1;i<n;i++){
    cin>>a>>b>>c;
    mina = min(a+minbtmp, a+minctmp);
    minb = min(b+minatmp, b+minctmp);
    minc = min(c+minbtmp, c+minatmp);
    minatmp = mina;
    minbtmp = minb;
    minctmp = minc;
  }

  int minab = min(mina, minb);
  int mingl = min(minab, minc);
  cout<<mingl<<endl;
}
