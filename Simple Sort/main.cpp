#include <iostream>
using namespace std;
int main()
{int a,b,c,n,m,s,swp=0;
  while(cin>>a>>b>>c)
    {n=a;m=b;s=c;
        for(int i=0;i<3;i++){
        if(a>b)
      {swp=b;b=a;a=swp;}
      else if(b>c)
        {swp=c;c=b;b=swp;}
      else if(a>c)
        {swp=c;c=a;a=swp;}}
cout<<a<<"\n"<<b<<"\n"<<c<<"\n";
cout<<"\n"<<n<<"\n"<<m<<"\n"<<s<<"\n";
    }
    return 0;
}
