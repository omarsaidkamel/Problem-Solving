#include <iostream>
using namespace std;
int a[5000],b[5000],n;bool y;
int main()
{
    cin>>n;
    for(int i=0;i<n;i++) {
     cin>>a[i]>>b[i];
     if(a[i]!=b[i])y=true;
    }
    if(y==true)
    {cout<<"rated";return 0;}
    for(int i=0;i<n-1;i++) {
      if(a[i]<a[i+1]){
        cout<<"unrated";return 0;
      }
    }
    cout<<"maybe";
    return 0;
}
