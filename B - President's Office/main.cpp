#include <bits/stdc++.h>
using namespace std;
char f[107][107],c;
long long arr[20000],arr1[20000],a,d,m,h,k,l;
set<char>sen;
int main()
{
    cin>>a>>d>>c;
    for(long long i=0;i<a;i++){
    for(long long j=0;j<d;j++){
        cin>>f[i][j];
        if(f[i][j]==c)
        {
            arr[m]=i;
            arr1[m]=j;
            m++;
        }
      }
    }
    for(long long j=0;j<m;j++){
        //top
        k=arr[j];l=arr1[j];
        if((f[k-1][l]>='A')&&(f[k-1][l]<='Z'))
                sen.insert(f[k-1][l]);
        //button
        if((f[k+1][l]>='A')&&(f[k+1][l]<='Z'))
                sen.insert(f[k+1][l]);
        //left
        if((f[k][l-1]>='A')&&(f[k][l-1]<='Z'))
               sen.insert(f[k][l-1]);
        //right
        if((f[k][l+1]>='A')&&(f[k][l+1]<='Z'))
              sen.insert(f[k][l+1]);
    }
    sen.erase(c);
    cout<<sen.size();
    return 0;
}
