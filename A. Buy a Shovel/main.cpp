#include <iostream>
using namespace std;
int a,s,d;
int main()
{
    cin>>a>>s;
    for(int i=1;i<1000;i++)
    {
            if((a*i)%10==s||(a*i)%10==0)
                {
                    break;
                }
            d++;

    }
    cout<<d+1;
    return 0;
}
