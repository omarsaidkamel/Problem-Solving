#include <iostream>
using namespace std;
int main()
{
    int mi=(int)1e9+4,n,a[(int)1e5+4],g;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        scanf("%d",&a[i]);
        if(mi>a[i]){mi=a[i];g=i;}
    }
    for(int i=1;i<=n;i++){
       if(g!=i&&mi==a[i]){
        cout<<"Still Rozdil";
        return 0;
       }
    }
    cout<<g;
    return 0;
}
