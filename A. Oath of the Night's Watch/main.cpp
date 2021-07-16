#include <bits/stdc++.h>
using namespace std;
int a,x,c[(int)1e5];
int main()
{
   cin>>a;
   for(int i=0;i<a;i++)
    cin>>c[i];
    sort(c,c+a);
    for(int i=1;i<a;i++){
       if(c[i]>c[0]&&c[i]<c[a-1]) x++;
    }
    cout<<x;
    return 0;
}
