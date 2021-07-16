#include<bits/stdc++.h>
using namespace std;
int n,m,a[100000+9];
bool sos(int x,int y){
if(x%m>y%m) return false;
if(x%m<y%m) return true;
if(x%m==y%m){
    if(x%2==0&&y%2==0)return x<y;
    else if(x%2==1&&y%2==1)return x>y;
    else if(x%2==1&&y%2==0)return true;
    else if(x%2==0&&y%2==1)return false;
}
}
int main(){
while(cin>>n>>m){
if(n==0&&m==0)return 0;
for(int i=0;i<n;i++) cin>>a[i];
sort(a,a+n,sos);
cout<<n<<" "<<m<<"\n";
for(int i=0;i<n;i++) cout<<a[i]<<"\n";
}
cout<<0<<" "<<0<<"\n";
return 0;
}
