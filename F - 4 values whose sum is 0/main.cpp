#include <bits/stdc++.h>
using namespace std;
const int N= 2509;
int a[N],b[N],c[N],d[N],f[N*N];
int main()
{
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++) scanf("%d %d %d %d",&a[i],&b[i],&c[i],&d[i]);
    int nxt=0;
    for(int i=0;i<n;i++){
      for(int j=0;j<n;j++){
        f[nxt++]=c[i]+d[j];
        }
      }
      sort(f,f+nxt);
      long long cnt=0;
    for(int i=0;i<n;i++){
      for(int j=0;j<n;j++){
        long long sum =a[i]+b[j];
        int q=upper_bound(f,f+nxt,-sum)-lower_bound(f,f+nxt,-sum);
        cnt+=q;
        }
    }
      printf("%lld\n",cnt);
      return 0;
}
