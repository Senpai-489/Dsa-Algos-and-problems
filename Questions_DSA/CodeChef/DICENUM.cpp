

#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
  int t;
  cin>>t;
  while(t--){
     int a[3],b[3];
     int alice,bob;
     for(int i=0;i<3;i++){
          cin>>a[i];
     }
     for(int i=0;i<3;i++){
          cin>>b[i];
     }
     sort(a,a+3);
     sort(b,b+3);
      alice=(a[2]*100)+(a[1]*10)+(a[0]);
      bob=(b[2]*100)+(b[1]*10)+(b[0]);
     if(alice>bob){
          cout<<"Alice"<<endl;
     }
     if(alice<bob){
          cout<<"Bob"<<endl;
     }
     if(alice==bob){
          cout<<"Tie"<<endl;
     }

  }
    return 0;
}
