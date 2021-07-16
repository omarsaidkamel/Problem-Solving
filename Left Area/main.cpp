#include <iostream>
#include<iomanip>
using namespace std;
int main()
{
    double k[12][12],sum=0;char o[2];int n=1,m=10;
    while(cin>>o[0])
        {
          for(int i=0;i<12;i++)
          {for(int j=0;j<12;j++){cin>>k[i][j];}}
          for(int i=0;i<5;i++)
          {for(int j=n;j<=m;j++){sum+=k[j][i];}
          n++;m--;
          }
          if(o[0]=='S'){cout<<fixed<<setprecision(1)<<sum<<"\n";}
          else{cout<<fixed<<setprecision(1)<<sum/30.0<<"\n";}
        }
    return 0;
}
