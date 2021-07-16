#include <iostream>
using namespace std;
int main()
{
    string s;
    cin>>s;
    for(int i=0;i<s.size();i++){
        if(i!=0){
           if('4'<s[i])
                cout<<'9'-s[i];
                else cout<<s[i];
        }
        else {
            if(s[i]!='9'){
               if('4'<s[i])
                cout<<'9'-s[i];
            else cout<<s[i];
            }
            else cout<<'9';
        }
    }
    return 0;
}
/*long long int  tranfer(long long int  n){
   long long int  m=0;
        n=n*10;
        n=n+1;
   while(n!=0){
        m*=10;
    if(n/10==0&&n%10==9) m+=n%10;
    else {
        m+=min(9-(n%10),n%10);
    }
    n/=10;
 //  printf("%lld\n",m);
   }
   while(m!=0){
     n*=10;
     n+=m%10;
     m/=10;
   }
   n/=10;
   return n;
}*/
