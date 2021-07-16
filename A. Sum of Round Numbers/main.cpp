#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t,n;
    scanf("%d",&t);
    while(t--){
        scanf("%d",&n);
        int c=0;vector<int>v;
        while(n){
            int y=c,x=1;
            while(y--)x*=10;
            if(n%10!=0)v.push_back((n%10)*x);
            n/=10;
            c++;
        }
       int n=v.size();
       printf("%d\n",n);
       for(int i=0;i<n;i++) printf("%d ",v[i]);
       puts("");
    }
    return 0;
}
