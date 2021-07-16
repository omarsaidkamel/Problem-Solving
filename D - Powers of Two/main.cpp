#include <bits/stdc++.h>
using namespace std;
int n,i,imm;long long a[(int)1e5+5],F=(int)1e9+9,j=1,mn[40],c;
int main()
{
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    while(F>j){mn[imm]=j;imm++;j*=2;} mn[imm]=j;imm++;
    cin>>n;
    for(int i=0;i<n;i++)cin>>a[i];
    sort(a,a+n);
    for(int i=0;i<n;i++){
      for(int j=0;j<imm;j++){
        int l=upper_bound(a+i+1,a+n,(mn[j]-a[i]))-lower_bound(a+i+1,a+n,(mn[j]-a[i]));
        c+=l;

       }
    }
    cout<<c;
    return 0;
}
