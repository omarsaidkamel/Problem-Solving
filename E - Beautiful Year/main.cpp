#include <iostream>
using namespace std;
int main()
{
    int n,a,b,c,d;
    scanf("%d",&n);
    d=n%10;c=(n/10)%10;b=(n/100)%10;a=(n/1000);
    for(int i=1;i<1000;i++){
        d++;
        if(d==10){
            d=0;c++;
            if(c==10){c=0;b++;}
            if(b==10){b=0;a++;}
        }
        if(c==10){c=0;b++;
        if(b==10){b=0;a++;}
        }
        if(b==10){b=0;a++;}
        if(a!=b&&a!=c&&a!=d&&b!=c&&b!=d&&c!=d&&d!=c) break;
    }
    printf("%d%d%d%d",a,b,c,d);
    return 0;
}
