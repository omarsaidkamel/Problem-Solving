#include <bits/stdc++.h>
using namespace std;
long long a[20000],x;
void Lucky_NUM(){

    for(int k = 1; k <= 10; k++){
        for(int i = 0; i < (1<<k); i++){
           long long sum = 0;
           for(int j = 0; j < k; j++){
            if(!j){
               if((i>>j)&1)  sum = 4;
               else sum = 7;
            }
            else {
              if((i>>j)&1)  sum = sum * 10 + 4;
              else sum = sum * 10 + 7;
            }
           }
           a[x++] = sum;
        }
     }
}
int main()
{
    long long n;
    Lucky_NUM();
    sort(a,a+x);
    cin>>n;
    cout<<lower_bound( a, a + x, n) - a + 1;
    return 0;
}
