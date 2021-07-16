#include <iostream>
using namespace std;
int a,b,x,y;
int main()
{
    cin>>a>>b;//x > y
    if(a==b){cout<<a;return 0;}
    else if(a>b){
         x=a;y=b;
       while(x!=y){
        y+=b;
        if(y>x) x+=a;
        }
    cout<<x;
    }
     else if(a<b) {
            y=a;x=b;
        while(x!=y){
        y+=a;
        if(y>x) x+=b;
        }
       cout<<x;
     }
    return 0;
}
