#include <iostream>
using namespace std;
int main()
{int x,a,b,f=0,o=0;long long n;
     cin>>x;
  for(int m=0;m<x;m++)
    {
        cin>>n>>a>>b;
        f=a;o=b;
    if(a<b)
        {while(n>=a)
            {a=f+a;}
            if(n<a)
                {a=a-f;
            a=a+b;}
            cout<<a;}
        else
            {while(n>=b)
            {b=o+b;}
            if(b>n)
                {b=b-o;
            b=a+b;}
                cout<<b;}}
      return 0;
}
