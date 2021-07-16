#include <bits/stdc++.h>
using namespace std;
int GCD(int n,int m){
  if(m == 0) return n;
  return GCD(m,n%m);
}
int main()
{
    int n;string s;
    scanf("%d",&n);
    getchar();
    while(n--){
        int a[102], sum = 0,h = 0;

         getline(cin,s);
        stringstream ss(s);
        while(ss>>a[h]) ++h;

            for(int i = 0; i < h ; i++){
                for(int j = i + 1; j < h ; j++){
                   sum = max( sum ,GCD(a[i],a[j]));
                }
            }
            printf("%d\n",sum);
    }
    return 0;
}
