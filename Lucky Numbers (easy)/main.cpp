#include <bits/stdc++.h>
using namespace std;
long long a[351],x;
void Lucky_NUM(){
    for(int k = 1; k <= 10; k++){
        for(int i = 0; i < (1<<k); i++){
           long long sum = 0,s = 0,f = 0;
           for(int j = 0; j < k; j++){
            if(!j){
               if((i>>j)&1)  {sum = 4;f++;}
               else {sum = 7;s++;}
            }
            else {
              if((i>>j)&1)  {sum = sum * 10 + 4;f++;}
              else {sum = sum * 10 + 7;s++;}
            }
           }
           if(s == f)
           a[x++] = sum;
        }
     }
}
int main()
{
    Lucky_NUM();
    sort(a,a+x);
    long long n;
    cin>>n;
    cout<<*lower_bound(a,a+x,n);
    return 0;
}
