#include <iostream>
using namespace std;
int n,a,b,c,t,x;
int main()
{cin>>n>>a>>b>>c;
 if((n==a+b)||(n==a+c)||(n==b+c))
    {cout<<2;}
 else
    {
        if(n%a==0)
           cout<<n/a;
     else if(n%b==0)
        cout<<n/b;
     else
        cout<<n/c;
    }

    return 0;
}
/* for(int i=0;i<=n;i++)
       {
          for(int j=0;j<=n;j++)
          {
            t=n-a*i-b*j;
            if(t>=0&&t%c==0&&x<i+j+t/c)
                x=i+j+t/c;
          }
       }
    cout<<x;
*/
