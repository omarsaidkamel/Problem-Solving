#include <iostream>
#include<math.h>
using namespace std;
int m,a,s,d,f;
int main()
{
   cin>>a>>s>>d>>f;
 m=(s+f)/s;
 if(m*d<a)
 cout<<"YES";
 else
 cout<<"NO";
    return 0;
}
