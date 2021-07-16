#include <bits/stdc++.h>
using namespace std;
long long a[(int)1e5+7],c[(int)1e5+7],b,n,m,l,k;
int main()
{
    cin>>b;
    for(int i=0;i<b;i++){
        cin>>a[i];
        c[i]=a[i];
        }
        for(int i=1;i<b;i++)
            a[i]+=a[i-1];
       sort(c,c+b);
      for(int i=1;i<b;i++)
            c[i]+=c[i-1];
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>m>>l>>k;
        if(m==1){
          cout<<a[k-1]-a[l-2]<<endl;
         }
       if(m==2)
            cout<<c[k-1]-c[l-2]<<endl;
    }
    return 0;
}
