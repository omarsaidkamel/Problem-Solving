#include <iostream>
using namespace std;
int main()
{long long int n,v=1,m=0;
cin>>n;
while(n>0)
    {
        n=n-v;v++;
         if(v<=n)
           {m++;}
    }
    cout<<m+1;
    return 0;
}
