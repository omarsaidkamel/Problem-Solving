#include <iostream>
using namespace std;
int arr[5][5],c,m,v,n,l;
int main()
{
    for(c=0;c<5;c++)
     {
         for(v=0;v<5;v++)
        {
          cin>>arr[c][v];
          if(arr[c][v]==1)
            {m=c;n=v;}
        }
     }

    if(m==4)
    {m-=2;l+=2;}
      if (n==4)
    {n-=2;l+=2;}
    if(m==3)
    {m-=1;l+=1;}
      if (n==3)
    {n-=1;l+=1;}
    if(m==1)
    {m+=1;l+=1;}
      if (n==1)
    {n+=1;l+=1;}
    if(m==0)
    {m+=2;l+=2;}
      if (n==0)
    {n+=2;l+=2;}
    cout<<l;
    return 0;
}
