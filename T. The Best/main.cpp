#include <iostream>
using namespace std;
int main()
{
   long long int a,b,c,d;
   cin>>a>>b>>c>>d;
   if(a<d&&a<b&&a<c)cout<<"A";
   else if(b<d&&b<a&&b<c)cout<<"B";
   else if(c<d&&c<b&&c<a)cout<<"C";
   else if(d<a&&d<b&&d<c)cout<<"D";
   else cout<<"Equal";
    return 0;
}
