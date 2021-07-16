#include <iostream>
#include<algorithm>
using namespace std;
int g[100000000],h[100000000],x,y,m,n,f;
bool ay7aga(int a, int b){
  if(a%2 == 0 && b%2 == 0){
    if(a < b) return 1;
    else return 0;
  }
  if(a%2 != 0 && b%2 == 0){
    return 0;
  }
  if(a%2 == 0 && b%2 != 0){
    return 1;
  }
  if(a%2 != 0 && b%2 != 0){
    if(a > b) return 1;
    return 0;
  }
}
int main()
{cin>>x>>y;
for(int i=0;i<x;i++)
cin>>g[i];
 for(int i=0;i<y;i++)
cin>>h[i];
sort(g,g+x,ay7aga);
sort(h,h+y,ay7aga);


for(int i=0;i<x;i++)
    {if(g[i]%2==0)
       {m++;}
       else{break;}
    }
    for(int i=0;i<y;i++)
    {if(h[i]%2==0)
       {f++;}
       else{break;}
    }
    if(f>m)
        cout<<m;
    else
        cout<<f;

    return 0;
}
