#include <iostream>
using namespace std;
int main()
{
    int s,n,a[1000],pma,pmi,ma=-(int)1e5+8,mi=(int)1e5+8;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a[i];
        if(a[i]>ma){ma=a[i];pma=i;}
        if(a[i]<mi){mi=a[i];pmi=i;}
    }
    a[pmi]=ma;a[pma]=mi;
    for(int i=0;i<n;i++) cout<<a[i]<<" ";
    return 0;
}
