#include <iostream>
using namespace std;
int k,a[(int)1e5+7];
int main()
{
    cin>>k;
    for(int i=0;i<k;i++)
             cin>>a[i];
        for(int i=0;i<k;i++){
        if(i==0) cout<<a[i+1]-a[i]<<" "<<max(a[i]-a[0],a[k-1]-a[i])<<endl;
        else if(i==k-1) cout<<a[i]-a[i-1]<<" "<<max(a[i]-a[0],a[k-1]-a[i])<<endl;
        else  cout<<min(a[i+1]-a[i],a[i]-a[i-1])<<" "<<max(a[i]-a[0],a[k-1]-a[i])<<endl;
         }
    return 0;
}
