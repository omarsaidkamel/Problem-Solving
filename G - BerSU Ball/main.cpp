#include <bits/stdc++.h>
using namespace std;
int c,nb,ng,b[109],g[109];
int main()
{
    scanf("%d",&nb);
    for(int i=0;i<nb;i++) scanf("%d",&b[i]);
    scanf("%d",&ng);
    for(int i=0;i<ng;i++) scanf("%d",&g[i]);
    sort(b,b+nb);sort(g,g+ng);
    for(int i=0;i<nb;i++){
        for(int j=0;j<ng;j++){
            if(b[i]==g[j]||b[i]==g[j]-1||b[i]==g[j]+1||b[i]-1==g[j]||b[i]+1==g[j])
            {g[j]=-1;c++;break;}
        }
    }
    printf("%d",c);
    return 0;
}
