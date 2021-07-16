#include <iostream>
using namespace std;
int main()
{
    long long int a,b,c,d;
    scanf("%lld%lld%lld%lld",&a,&b,&c,&d);
    if(a<=b&&a<=c&&a<=d){
         if(a==b||a==c||a==d)puts("We are the best");
         else puts("Amr");
    }
    else if(b<=a&&b<=c&&b<=d){
         if(a==b||b==c||b==d)puts("We are the best");
         else puts("Waleed");
    }
    else if(c<=b&&c<=a&&c<=d){
         if(c==b||a==c||c==d)puts("We are the best");
         else puts("Mustafa");
    }
    else if(d<=b&&d<=c&&d<=a){
         if(d==b||d==c||a==d)puts("We are the best");
         else puts("Youssef");
    }
    return 0;
}
