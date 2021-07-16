#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int i,k,n;
    double p,e;
    cin>>n>>k;
    int x[n],y[n];
    for(i=0;i<n;i++) cin>>x[i]>>y[i];
    for(i=0;i<n-1;i++)
    {
        e=sqrt(pow(x[i+1]-x[i],2) + pow(y[i+1]-y[i],2)*1.0);
        p+=(e/50);
    }
    printf("%.9f",p*k);
}
