#include <bits/stdc++.h>
using namespace std;
int main()
{
    int m,n,x;bool f=1;vector<int>v;
    scanf("%d%d",&n,&m);x=m;
    if(n*9<m||(m==0&&n>1))puts("-1 -1");
    else if(m==0&&n==1)puts("0 0");
    else {
       for(int i=0;i<n;i++){
        if(m>=9) v.push_back(9);
        else if(m>0) v.push_back(m);
        m-=9;
       }
       if(n>v.size()){
        v[v.size()-1]--;
        cout<<'1';
        for(int i=0;i<n-v.size()-1;i++) cout<<'0';
        for(int i=v.size()-1;i>=0;i--)cout<<v[i];
       }
        else for(int i=v.size()-1;i>=0;i--)cout<<v[i];
       cout<<" ";
       for(int i=0;i<n;i++){
        cout<<max(x>=9?9:x,0);
        x-=9;
       }
    }
    return 0;
}
