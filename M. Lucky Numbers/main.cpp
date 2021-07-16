#include <iostream>
using namespace std;
int main()
{
    int a,b,m,c=0;bool f;
    cin>>a>>b;
    for(int i=a;i<=b;i++){
     m=i;
     while(m!=0){
            f=true;
        if(m%10==4||m%10==7) m/=10;
        else {f=false; break;}
     }
     if(f==true){cout<<i<<" ";c++;}
    }
    if(c==0)cout<<-1;
    return 0;
}
