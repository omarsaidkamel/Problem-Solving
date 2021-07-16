#include <iostream>
using namespace std;
int main()
{
   string s,k="PgEfTYaWGHjDAmxQqFLRpCJBownyUKZXkbvzIdshurMilNSVOtec#@_!=.+-*/",o="abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
   int n;scanf("%d",&n);cin>>s;int f=s.length(),m=k.length(),y=o.length();
   if(n==1){//o->k
       for(int i=0;i<f;i++){
          for(int j=0;j<y;j++){
            if(s[i]==o[j]){
            printf("%c",k[j]);break;
            }
          }
       }
   }
   else {
     for(int i=0;i<f;i++){
          for(int j=0;j<m;j++){
            if(s[i]==k[j]){
            printf("%c",o[j]);break;
            }
          }
       }
   }
   return 0;
}
