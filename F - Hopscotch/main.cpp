#include <iostream>
using namespace std;
int a,b,c;
int main()
{
    cin>>a>>b>>c;
    if(a<=b||a<=c||(b==0&&c==0))
    cout<<-1;
    else
        {
            if(a>b&&a>c)
            cout<<a;

        }
   return 0;
}
