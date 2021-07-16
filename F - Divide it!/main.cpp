#include <iostream>
using namespace std;
long long a,s,d;
int main()
{
    cin>>a;
    for(int i=0;i<a;i++)
        {
            cin>>s;
         while(s!=1||s<1)
         {
                if(s%2==0)
                 {s/=2;d++;}
               else if(s%3==0)
                  {s=(s*2)/3;d++;}
               else if(s%5==0)
                  {s=(s*4)/5;d++;}
                  else
                  {cout<<-1<<"\n";break;}
         }
         if(s==1)
            cout<<d<<"\n";
            d=0;
        }
    return 0;
}
