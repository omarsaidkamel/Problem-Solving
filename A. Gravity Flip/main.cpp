#include <iostream>
using namespace std;
int n,a[100];
int main()
{cin>>n;
for(int i=0;i<n;i++)
    {cin>>a[i];}
 for(int i=0 ; i<n ;i++)
    {
       for(int j=0 ; j<n-1 ; j++)
       {
           if(a[j]>a[j+1])
           {
               int temp=a[j];
               a[j]=a[j+1];
               a[j+1]=temp;
           }
       }
    }
   for(int i=0;i<n;i++)
    {cout<<a[i]<<" ";}
    return 0;
}
