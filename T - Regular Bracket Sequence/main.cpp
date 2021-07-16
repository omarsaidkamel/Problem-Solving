#include <iostream>
using namespace std;
int a,b,h;string s;
int main()
{
    cin>>s;
    int d=s.size();
    for(int i=0;i<d;i++)
        {
            if(s[i]=='(')
               a++;
            if(s[i]==')')
              {
                  if(a>0)
                  {a--;h++;}
              }
        }
        cout<<h*2;
    return 0;
}
