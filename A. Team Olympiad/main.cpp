#include <iostream>
using namespace std;
long long x,a,s[1000000],n[1000000],d,l,m,f=1;
int main()
{
    cin>>a;
    for(int i=1;i<=a;i++)
       cin>>s[i];
    for(int i=1;i<=a;i++)
      {
          if(s[i]==1)
           {n[f]=i;
            f+=3;
            l++;}
      }f=2;
       for(int i=1;i<=a;i++)
      {
          if(s[i]==2)
            {n[f]=i; f+=3;l++;}
      }f=3;
       for(int i=1;i<=a;i++)
      {
          if(s[i]==3)
            {n[f]=i; f+=3;l++;}
      }
      for(int i=1;i<=l;i+=3)
      {
          if(i>a)
          break;
          if((n[i]!=0)&&(n[i+1]!=0)&&(n[i+2]!=0))
                x++;
      }
      cout<<x<<"\n";
      for(int i=1;i<=x*3;i++)
      {
             if(i%3!=0)
               cout<<n[i]<<" ";
             else
               cout<<n[i]<<"\n";
      }
    return 0;
}
