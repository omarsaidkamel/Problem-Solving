#include <iostream>
using namespace std;
int n=3,a[3];string s,x;
int main()
{
   while(n--){
      cin>>s;
      if(s[1] == '>') a[s[0]-65]++;
      else  a[s[2]-65]++;
   }
   n=3;
   if(a[0] && a[1] && a[2])puts("Impossible");
   else{
        for(int i=0; i<3; i++) x[a[i]] = 65 + i ;
		cout<<x[0]<<x[1]<<x[2];
   }
   return 0;
}
