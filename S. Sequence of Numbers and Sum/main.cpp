#include<iostream>
using namespace std;
int main(){
    int n,m,s=0;
    while(cin>>n>>m){
            if(m<1||n<1)return 0;
        if(n<m){
        for(int i=n;i<=m;i++){
            cout<<i<<" ";s+=i;
        }
        cout<<"sum ="<<s<<"\n";s=0;
        }
        else{
            for(int i=m;i<=n;i++){
                cout<<i<<" ";s+=i;
            }
            cout<<"sum ="<<s<<"\n";s=0;
        }
    }
}
