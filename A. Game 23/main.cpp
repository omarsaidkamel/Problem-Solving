#include <iostream>
using namespace std;
int main()
{
   long long int c,x,j,i=0,f=0;
   cin>>x>>j;c=j/x;
   if(x==j){cout<<0;}
   else if((j%x)==0)
    { while(j!=x)
       {
        while(c%6==0)
         {f++;c=c/6;}
        while(f!=0){x=x*6;i=i+2;f--;}
          if(j!=x){ x=x*2;i++;}
       }
       cout<<i;
    }
    else{cout<<-1;}

    return 0;
}
