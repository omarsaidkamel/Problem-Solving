#include <iostream>
using namespace std;
int a,b,c,d,e;
int main()
{
    cin>>a>>b;
    for(int i=0;i<a;i++)
        {cin>>c;d++;
          e+=c;
        }
        if(((d-1)*10)+e>b)
            {
               cout<<-1;
            }
   else{cout<<(b-e)/5;}
    return 0;
}
