#include <iostream>
using namespace std;
int s;
bool is_p(int s){
    int f=0;
    while(s){
     int d=s%10;s/=10;
     f+=d;
    }
    if(f==10)return true ;
    else return false;
}
int c;
int main()
{
    cin>>s;
    for(int i=19;i<11000000;i+=9){
        if(is_p(i))c++;
      if(c==s)
         {printf("%d\n",i);return 0;}
    }
    return 0;
}
