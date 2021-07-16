#include<iostream>
using namespace std;
long long l,c;
int d,a[100005],n;
int main(){
    scanf("%d %d",&n,&d);
    for(int i=0;i<n;i++) scanf("%d",&a[i]);
    if(a[n-1]-a[0]<=d){printf("%d",n);return 0;}
    while(l<n-1){
      for(int i=n-1;i>l;i--){
         if(a[i]-a[l]<=d&&i!=l+1)c++;
      }
      l++;
    }
    cout<<c;
    return 0;
}
