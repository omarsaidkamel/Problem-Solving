#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;cin>>t;
    while(t--){
    int n,i,f=0,a[100];cin>>n;
     for(i=0;i<n;i++) scanf("%d",a+i);
     sort(a,a+n);
      for(i=1;i<n;i++){
       if(a[i]-a[i-1]>1){f=1;puts("NO");break;}
      }
       if(f==0)puts("YES");
     }
}
