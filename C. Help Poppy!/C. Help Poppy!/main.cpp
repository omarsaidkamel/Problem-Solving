#include <iostream>
#include<cstdio>
#include<iomanip>
using namespace std;
int main()
{int x;long long x1,x2,x3,x4,x5,y1,y2,y3,y5,y4;
cin>>x;
if(3<=x&&x<=5)
    {
        if(x==3)
      {cin>>x1>>y1;cin>>x2>>y2;cin>>x3>>y3;
        if(0.5*(((x1*y2)-(x1*y3))+((x2*y3)-(x2*y1))+((x3*y1)-(x3*y2)))<0)
        {cout<<fixed<<setprecision(6)<<-1*(0.5*(((x1*y2)-(x1*y3))+((x2*y3)-(x2*y1))+((x3*y1)-(x3*y2))));}
        else{cout<<fixed<<setprecision(6)<<0.5*(((x1*y2)-(x1*y3))+((x2*y3)-(x2*y1))+((x3*y1)-(x3*y2)));}
      }
        else if(x==4)
            {cin>>x1>>y1;cin>>x2>>y2;cin>>x3>>y3;cin>>x4>>y4;
        if(0.5*(((x1*y2)-(x2*y1))+((x2*y3)-(x3*y2))+((x3*y4)-(x4*y3))+((x4*y1)-(x1*y4)))<0)
        {cout<<fixed<<setprecision(6)<<-1*(0.5*(((x1*y2)-(x2*y1))+((x2*y3)-(x3*y2))+((x3*y4)-(x4*y3))+((x4*y1)-(x1*y4))));}
        else{cout<<fixed<<setprecision(6)<<0.5*(((x1*y2)-(x2*y1))+((x2*y3)-(x3*y2))+((x3*y4)-(x4*y3))+((x4*y1)-(x1*y4)));}
            }
        else
            {cin>>x1>>y1;cin>>x2>>y2;cin>>x3>>y3;cin>>x4>>y4;cin>>x5>>y5;
        if(0.5*(((x1*y2)-(x2*y1))+((x2*y3)-(x3*y2))+((x3*y4)-(x4*y3))+((x4*y5)-(x5*y4))+((x5*y1)-(x1*y5)))<0)
        {cout<<fixed<<setprecision(6)<<-1*(0.5*(((x1*y2)-(x2*y1))+((x2*y3)-(x3*y2))+((x3*y4)-(x4*y3))+((x4*y5)-(x5*y4))+((x5*y1)-(x1*y5))));}
        else{cout<<fixed<<setprecision(6)<<0.5*(((x1*y2)-(x2*y1))+((x2*y3)-(x3*y2))+((x3*y4)-(x4*y3))+((x4*y5)-(x5*y4))+((x5*y1)-(x1*y5)));}
            }
    }
    return 0;
}
