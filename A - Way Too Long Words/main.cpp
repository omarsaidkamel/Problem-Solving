#include <iostream>
using namespace std;
int main()
{
  int x,n;string s;
  cin>>x;
  for(int m=0;m<x;m++)
    {
        cin>>s;
      n=s.size();
      if(n<=10){
     cout<<s<<"\n";
      }
      else{cout<<s[0]<<n-2<<s[n-1]<<"\n";}
    }
   return 0;
}
