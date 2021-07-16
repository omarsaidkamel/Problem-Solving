#include <iostream>
using namespace std;
int arr[60],c;
int main()
{int a,s,i;
    cin>>a>>s;
    for(i=1;i<=a;i++)
    cin>>arr[i];
    for(i=1;i<=a;i++){
      if(arr[s]==0&&arr[1]!=0)
      {if(arr[i]!=0)c++;}
      else if(arr[s]<=arr[i])c++;
      if(arr[s]==0&&arr[1]==0)c=0;
    }
    cout<<c;
    return 0;
}
