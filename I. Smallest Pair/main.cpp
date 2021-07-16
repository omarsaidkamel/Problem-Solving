#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,a[108],m=(int)1e7+7;
    cin>>t;
    for(int i=0;i<t;i++){
      cin>>n;
      for(int j=1;j<=n;j++) cin>>a[j];
      for(int j=1;j<=n;j++){
       for(int h=j+1;h<=n;h++){
            if(m>a[j]+a[h]+h-j) m=a[j]+a[h]+h-j;
           }
      }
     cout<<m<<"\n";m=(int)1e7+7;
    }
    return 0;
}
