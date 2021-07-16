#include <iostream>
using namespace std;
int n,arr[(int)1e5],sum1,l=1;
bool isprime(int x){
  if(x==2)return true;
  if(x<2||x%2==0) return false;
  for(int i=3;i*i<=x;i+=2) if(x%i==0)return false;
  return true;
}
int main(){
    cin>>n;
    for(int i=1;i<=n;i++) cin>>arr[i];
        if(isprime(arr[(n/2)+1])==false){
            for(int i=1;i<n;i++){
                if(isprime(arr[(n/2)+i])){l=i;break;}
                if(isprime(arr[(n/2)-i])){l=i*-1;break;}
            }
        }

    for(int i=1;i<=n;i++){
                if(arr[(n/2)+l]==arr[i])continue;
                else if(arr[(n/2)+l]-arr[i]>0) sum1+=arr[(n/2)+l]-arr[i];
                else sum1+=arr[i]-arr[(n/2)+l];
                cout<<arr[(n/2)+l]<<" "<<sum1<<" "<<l<<endl;
    }
    cout<<sum1;
    return 0;
}
