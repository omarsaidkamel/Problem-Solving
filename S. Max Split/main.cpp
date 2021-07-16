#include <iostream>
using namespace std;
int main()
{
   string s;cin>>s;int a[1009];
   int n=s.length(),c=0;
   for(int i=0;i<n;i++){
    if(s[i]=='L'){
        for(int j=i+1;j<n;j++){
            if(s[j]=='R'){
               for(int g=j+1;g<n;g++){
                   if(s[g]=='L'){
                        a[i]=g-1;
                      c++;break;
                    }
               }
            }
        }
    }

   }
    return 0;
}
