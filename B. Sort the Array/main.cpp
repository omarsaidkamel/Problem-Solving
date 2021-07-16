#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,a[100005],b[100005],f,s;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
        b[i]=a[i];
    }
    sort(b,b+n);
    for(int i=0; i<n; i++)
    {
      if(a[i]!=b[i]){
        f=i; break;
      }
    }
    for(int i=n-1; i>=0; i--)
    if(a[i]!=b[i]){s=i; break;}

    reverse(a+f, a+s+1);

    for(int i=0; i<n; i++)
    if(a[i]!=b[i]){printf("no"); return 0;}

    printf("yes\n%d %d", f+1,s+1);
    return 0;
}

