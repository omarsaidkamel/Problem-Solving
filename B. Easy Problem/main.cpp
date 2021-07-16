#include <iostream>
#include<cmath>
using namespace std;
int main()
{   double v,h; 
     cin>>v>>h;
    if((fmod(v,2)==0)&&(fmod(h,2)==0)||(fmod(v,2)!=0)&&(fmod(h,2)!=0)) cout<<"Even.";
      else cout<<"Odd.";
    return 0;
}
