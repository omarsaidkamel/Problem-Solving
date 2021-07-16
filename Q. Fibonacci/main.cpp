#include <iostream>
using namespace std;
int main()
{
    long long n,s=1,m=0;cin>>n;
   if(n==0||n==1)cout<<m<<"\n";
    else if(n==2)cout<<s<<"\n";
       else {
            for(int i=2;i<n;i++){
                  if(m>=s) s+=m;
                    else m+=s;
                }
          if(m>s)cout<<m<<"\n";
           else cout<<s<<"\n";
        }
    return 0;
}
//0 1 1 2 3 5 8 13
//1 2 3 4 5 6 7 8
