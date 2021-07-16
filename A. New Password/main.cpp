#include <iostream>
using namespace std;
char c='a',s[100000];int i,a,k,m;
int main()
{
    cin>>a>>k;
    for(i=0;i<k;i++)
                {
                    if(c=='{')
                            c=c-26;
                    s[i]=c;
                    c++;
                }
    for(i=0;i<a;i++)
        {
            cout<<s[m];m++;
             if(s[m]==0)
                m=0;
        }
    return 0;
}
