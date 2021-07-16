#include <bits/stdc++.h>
using namespace std;
long long int afip[106],m;
void fip(long long int  n){
  afip[0]=0;afip[1]=1;
  while(afip[m]+afip[m+1]!=n){
     afip[m+2]=afip[m]+afip[m+1];
     m++;
  }
  afip[m+2]=afip[m]+afip[m+1];m++;
}
int main()
{
    long long int n,k,l;
    scanf("%lld",&n);
    if(n==0||n==1){printf("%d 0 0",n);return 0;}
    fip(n);
    for(long long int i=0;i<n;i++){
      k=*lower_bound(afip,afip+m,n-i);
      if(binary_search(afip,afip+m,i)==true){
        for(long long int j=0;j<m;j++){
           l=*lower_bound(afip,afip+m,k-j);
          if(n==l+i+j&&binary_search(afip,afip+m,j)==true){
            printf("%lld %lld %lld",i,l,j);
            return 0;
          }
       }
     }
    }
    puts("I'm too stupid to solve this problem");
    return 0;
}
