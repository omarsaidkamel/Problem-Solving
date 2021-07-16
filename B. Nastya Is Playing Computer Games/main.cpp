#include <iostream>
using namespace std;
int main()
{
  int x[100][100],y[100][100],g=0,a,b,k,l;
  cin>>a>>b;
  for(int i=0;a>i;i++)
    {for(int n=0;b>n;n++)
     { cin>>x[i][n];
     }
    }
    for(int i=0;a>i;i++)
    {for(int n=0;b>n;n++)
     { cin>>y[i][n];
     }
    }
  for(int p=0;b>p;p++)
     {int t=x[0][p];
     x[0][p]= x[p][0];
       x[p][0]=t;
     }

  for(int i=0;a>i;i++)
    {for(int n=0;b>n;n++)
     {
         k=x[i][n];
         l=y[i][n];

     if(k==l){g=g+1;}

     }
     }
if(g==(a*b))
    {
    cout<<"yes";}
else
    cout<<"no";
    return 0;
}
