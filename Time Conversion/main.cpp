#include <iostream>
using namespace std;
int main()
{
    int v=0,c;cin>>c;
    while(c-3600>0)
    {c-=3600;v++;}
    cout<<v<<":";v=0;
    while(c-60>0)
    {c-=60;v++;}
    cout<<v<<":"<<c<<"\n";
    return 0;
}
