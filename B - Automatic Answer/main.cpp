#include <iostream>
using namespace std;
int a,s,d;
int main()
{
    cin>>a;
    for(int i=0;i<a;i++)
    {
        cin>>s;
     s*=567;s/=9;s+=7492;s*=235;s/=47;s-=498;
        s/=10;
        if(s<0)
        s*=-1;
            cout<<s%10<<"\n";
    }
    return 0;
}
