#include <iostream>
using namespace std;
int t,n,p,m,x,a[(int)1e5+2],b[(int)1e5+2],ma1,ma2;
int main()
{
    scanf("%d",&t);
    for(int i=0;i<t;i++){
            scanf("%d%d",&n,&m);x=m;int ma=0,pos=0;
       for(int j=0;j<n;j++){
         scanf("%d",&a[j]);
         if(a[j] == 1 && j != 0){
            b[j] = b[j-1]+a[j];
            if(ma<b[j]){ma = b[j]; pos = j;}
         }
         else b[j]=a[j];
       }
    for(int i=0;i<n;i++){
      if(b[i]==1){ p = i;
        for(i;i<n;i++){
         if(b[i]!=0) b[p] = b[i];
         else break;
        }
      }
    }
       ma1 = ma; ma2 = ma;
       for(int i = pos; i < n-1 ; i++){
          if(m==0){
            if(b[i+1]>0&&i+1<n) ma1 +=  b[i+1];
            break;
          }
          if(b[i+1]==0&&i+1<n){
            ma1 +=  b[i+1]+1;
            m--;
          }
          else if ( b[i+1] > 0 && i + 1 < n && m != x ) ma1 +=  b[i+1];
        }
       m=x;
       for(int i=pos;i>=0;i--){
         if(m==0){
            if( b[i-1] > 0 && i-1 >= 0 ) ma2 +=  b[i-1];
            break;
          }
         if(b[i-1] == 0 && i-1 >= 0){
            ma2 +=  b[i-1]+1;
            m--;
          }
        else if ( b[i-1] > 0 && i-1 >= 0 && m != x )  ma2 +=  b[i-1];
       }
      //  for(int i=0;i<n;i++) cout<<b[i]<<" ";
     printf("%d\n",max(ma2,ma1),ma1,ma2);
    }
     //// cout<<"\n"<<pos<<" "<<b[pos]<<" "<<ma1<<" "<<ma2<<"\n";
    return 0;
}/*
2
10 1
1 1 1 1 1 1 0 0 1 1
11 2
1 0 0 1 1 0 1 0 1 1 1
12 2
1 1 1 0 1 0 1 1 0 0 1 0
*/
