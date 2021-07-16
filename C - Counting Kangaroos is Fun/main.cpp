#include <bits/stdc++.h>
using namespace std;
int n,i,A[50000002],x,c,y;
int main()
{
    scanf("%d",&n);
    for(int i=0;i<n;i++) scanf("%d",A+i);
    sort(A,A+n); y = n - 1;x = (n/2) - 1;
    while(x>=0){
        if(A[x] * 2 <= A[y]) {c++;y--;}
        x--;
    }
    cout<<n-c;
    return 0;
}
