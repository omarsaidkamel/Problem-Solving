#include <iostream>
using namespace std;
int main()
{
    int a,b,c;
    cin>>a>>b>>c;
       if(a>=b&&a>=c){
        if(b>=c){cout<<c<<" "<<a;}
        else {cout<<b<<" "<<a;}
       }
       else if(b>=a&&b>=c){
        if(a>=c){cout<<c<<" "<<b;}
        else {cout<<a<<" "<<b;}
       }
       else if(c>=b&&c>=a){
        if(a>=b){cout<<b<<" "<<c;}
        else {cout<<a<<" "<<c;}
       }
    return 0;
}
