#include<iostream>
using namespace std;
int main(){
      int t,n,a[1008];
      cin>>t;
      while(t--){
        int c=0;
        cin>>n;
        for(int i=0;i<n;i++) cin>>a[i];
        for(int i=0;i<n;i++){
            int ma=a[i];
          for(int j=i+1;j<n;j++){
            if(ma>a[j]) break;
            else c++;
            ma=a[j];
           }
        }
        cout<<c+n<<"\n";
      }
       return 0;
}
