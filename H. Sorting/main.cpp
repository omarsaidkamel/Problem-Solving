#include <iostream>
using namespace std;
int main()
{
    int n,a[10000+9],s;cin>>n;
    for(int i=0;i<n;i++) cin>>a[i];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(a[i]<a[j]){
                s=a[j];a[j]=a[i];a[i]=s;
            }
        }
    }
    for(int i=0;i<n;i++) cout<<a[i]<<" ";
    return 0;
}
