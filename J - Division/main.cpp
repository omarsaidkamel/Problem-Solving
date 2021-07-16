#include <bits/stdc++.h>
using namespace std;
int A[10],n;
bool ok(int sum,int e){
    string x,y,z;
    x=to_string(sum);y=to_string(e);z=x+y;
    for(int i=0;i<z.size();i++) A[z[i]-'0']++;
    if(A[0]>1)return false;
    for(int i=1;i<10;i++){
        if(A[i]!=1)return false;
    }
  return true;
}
int main()
{
    int f=1;
    while(scanf("%d",&n)==1&&n){
    if(!f) puts(""); f = 0;
      bool flag=0;int sum;
      for(int i=1234;i<=54321;i++){
        sum = i * n;
        if(sum > 98766)break;
        if(ok(sum,i)){
            printf("%05d / %05d = %d\n",sum,i,n);
            flag=1;
        }
       fill(A,A+10,0);
      }
      if(!flag)printf("There are no solutions for %d.\n",n);
    }
    return 0;
}
