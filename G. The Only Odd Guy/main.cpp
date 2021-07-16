#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int t,n,x,A[100002];
    scanf("%d",&t);
    while(t--){int c=1,f=0;
        scanf("%d",&n);
        for(int i=0;i<n;i++)scanf("%d",A+i);
        sort(A,A+n);
        for(int i=0;i<n;i++){
            if(A[i]==A[i+1])c++;
            else {
                if(c%2==1){
                  cout<<A[i]<<"\n";f=1;
                }
                c=1;
            }
        }
        if(!f)cout<<A[n-1];
    }
    return 0;
}
