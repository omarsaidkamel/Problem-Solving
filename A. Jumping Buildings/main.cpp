#include <iostream>
using namespace std;
int n,h[(int)10e5+7],m;
int main()
{
    cin>>n;
    for(int x=0;x<n;x++) cin>>h[x];
      for(int j=0;j<n;j++){
            m=0;
        for(int i=j+1;i<n;i++){
            if(h[j]>=h[i]) m++;
            else break;
        }
        cout<<m<<" ";
    }
    return 0;
}
