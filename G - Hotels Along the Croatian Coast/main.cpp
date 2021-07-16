#include<iostream>
using namespace std;
const int N = 300009;
long long s, ma;
int i,l,a[N],n,m;
int main()
{
    scanf("%d %d",&n, &m);
        for(i=0; i<n; i++) scanf("%d",&a[i]);
        for(i=0; i<n; i++)
        {
            s += a[i];
            while(s>m)
            {
                s -= a[l];
                l++;
            }
            if(ma<=s && s<=m) ma = s;
        }
        printf("%lld\n", ma);
    return 0;
}
