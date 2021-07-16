#include<bits/stdc++.h>
using namespace std;
int p[(int)1e5+6];
bool cmp(int a,int b){
     return a > b;
}
int main()
{
    int a,b,n,f;long long sum = 0;
    scanf("%d%d",&n,&f);
    for(int i = 0 ; i < n ; i++){
        scanf("%d%d",&a,&b);
        sum += min(a,b);
        p[i] = min(a*2,b) - min(a,b);
    }
    sort(p,p+n,cmp);
    for(int i = 0 ; i < f ; i++){
      sum += p[i];
    }
    cout<<sum;
    return 0;
}
