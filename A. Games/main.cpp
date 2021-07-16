#include <iostream>
using namespace std;
int a[1000],b[1000],c,n;
int main()
{
    cin>>c;
    for(int i=0;i<c;i++)
       cin>>a[i]>>b[i];
     for(int i=0;i<c;i++)
     {
         for(int j=0;j<c;j++)
            {
              if(a[i]==b[j])
                    n++;
            }
     }
     cout<<n;
    return 0;
}
