#include <iostream>
using namespace std;
int main()
{
    int n;bool f=true;
    cin>>n;
    for(int i=2;i<=n;i++)
    {
      for(int j=2;j<=i/2;j++)
      {
         if(i%j==0&&i!=j)
            {f=false;break;}
      }
      if(f==true)
       cout<<i<<" ";f=true;
    }
    return 0;
}
