#include <bits/stdc++.h>
using namespace std;
int main()
{
    double x,y;
    cin>>x>>y;
    if(x==1)cout<<"Total: R "<<fixed<<setprecision(2)<<y*4.00;
    else if(x==2)cout<<"Total: R "<<fixed<<setprecision(2)<<y*4.50;
    else if(x==3)cout<<"Total: R "<<fixed<<setprecision(2)<<y*5.00;
    else if(x==4)cout<<"Total: R "<<fixed<<setprecision(2)<<y*2.00;
    else cout<<"Total: R "<<fixed<<setprecision(2)<<y*1.50;
    return 0;
}
