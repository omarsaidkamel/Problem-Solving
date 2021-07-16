#include<iostream>
using namespace std;
int main(){
int n;bool f=true;
cin>>n;
for(int i=2;i<=n;i++){
   for(int j=2;j<=i;j++){
     if(i%j==0&&i!=j)
        {
            f=false;break;
        }
   }
    if(f==true)
    printf("%d ",i);f=true;
}
return 0;
}/*
for(int i=2;i<=n;i++)
    {
      for(int j=2;j<=i/2;j++)
      {
         if(i%j==0&&i!=j)
            {f=false;break;}
      }
      if(f==true)
       cout<<i<<" ";f=true;
    }
/*#include <iostream>
using namespace std;
int n,m,arr[20]={2,3,5,7,11,13,17,19,23,29,31,37,41,43,47};
int main()
{

    cin>>n>>m;
for(int i=0;i<20;i++)if(n==arr[i]&&m==arr[i+1]) {cout<<"YES";return 0;}
    cout<<"NO";
    return 0;
}*/
