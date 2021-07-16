#include <bits/stdc++.h>
using namespace std;
int n,a[109],sum,s,c;
int main()
{
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a[i];
        sum+=a[i];
    }
    sort(a,a+n);
    for(int i=n-1;i>=0;i--){
         s+=a[i];
        if(s<=sum/2||s==sum) c++;
            if(s>sum) break;
    }
    cout<<c;
    return 0;
}
