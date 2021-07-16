#include <bits/stdc++.h>
using namespace std;
int n,A[1006],D[600000],x,m,f,t;
int main()
{
    while(scanf("%d",&n)&&n){x=0;
        printf("Case %d:\n",++t);
        for(int i=0;i<n;i++) scanf("%d",A+i);
        for(int i=0;i<n;i++) {
          for(int j=i+1;j<n;j++) {
            D[x] = A[i] + A[j];x++;
          }
        }
        sort(D,D+x);
        scanf("%d",&m);
        for(int i=0;i<m;i++){
          scanf("%d",&f); int ans =10000000,h;
          for(int i=0;i<x;i++){
            if(ans>abs(f-D[i])){
                ans=abs(f-D[i]);h=D[i];
            }
          }
          printf("Closest sum to %d is %d.\n",f,h);
        }
    }
    return 0;
}
