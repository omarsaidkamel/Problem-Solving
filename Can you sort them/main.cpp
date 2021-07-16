#include <iostream>
using namespace std;
int main()
{ int x,y,z;
cin>>x>>y>>z;
int a[3];a[0]=x; a[1]=y; a[2]=z;
    for(int i=0 ; i<3 ;i++)
    {
       for(int j=0 ; j<2 ; j++)
       {
           if(a[j]>a[j+1])
           {
               int temp=a[j];
               a[j]=a[j+1];
               a[j+1]=temp;
           }
       }
    }
    cout<<a[0]<<"\n"<<a[1]<<"\n"<<a[2];
    return 0;
    }
