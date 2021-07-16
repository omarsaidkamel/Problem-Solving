#include <iostream>
using namespace std;
int main()
{
    int t,x,y,c=0;cin>>t;
    for(int i=0;i<t;i++){
       cin>>x>>y;
     if(x<y)
     {
        for(int j=x+1;j<y;j++) if(j%2!=0) c+=j;
     }
     else{
            for(int j=y+1;j<x;j++) if(j%2!=0) c+=j;
         }
      cout<<c<<"\n";
      c=0;
    }
    return 0;
}
