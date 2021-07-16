#include <iostream>
using namespace std;
long long t,n,c,m,h=1;
int main()
{
    cin>>t;
    for(int i=0;i<t;i++){
            cin>>n;
      while(n!=0){
        if(n%2!=0) c++;
        n/=2;
       }
      while(c!=0){
        m+=h;
        h*=2;
        c--;
      }
      cout<<m<<"\n";h=1;m=0;c=0;
    }
    return 0;
}
