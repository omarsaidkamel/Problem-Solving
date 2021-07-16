#include <bits/stdc++.h>
using namespace std;
int main()
{
   float a,b,c,x1,x2;
   cin>>a>>b>>c;
   if(4*a*c>b*b||a==0){
    cout<<"Impossivel calcular\n";
   }
   else{
    x1=(((-1*b)+(sqrt((b*b)-(4*a*c))))/(2*a));
    x2=(((-1*b)-(sqrt((b*b)-(4*a*c))))/(2*a));
   cout<<fixed<<setprecision(5)<<"R1 = "<<x1<<"\n"<<"R2 = "<<x2<<"\n";
   }
    return 0;
}
