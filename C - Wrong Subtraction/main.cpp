#include <iostream>
using namespace std;
long long a,s;
int main()
{
    cin>>a>>s;
    while(s!=0)
        {
            if(a%10==0)
              {
                   s--;a/=10;
              }
                else
                    {
                        a--;s--;
                    }
        }
        cout<<a;
    return 0;
}
