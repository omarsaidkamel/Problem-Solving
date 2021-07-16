#include <iostream>
using namespace std;
char d[2001] ,s[2001];
int main()
{
    int n ;
    scanf("%d",&n);
    cin>>s;
         int y =  n / 2;
      if(n % 2 == 0 ){
         for(int i = 0 ; i < n; i++){
           d[y - 1] = s[i++];
           d[n - y] = s[i];
           y--;
         }
      }
      else {
            d[y] = s[0];
        for(int i = 1 ; i < n; i++){
           d[y - 1] = s[i++];
           d[n - y] = s[i];
           y--;
         }
      }
        for(int i = 0 ; i < n; i++) cout<<d[i];
    return 0;
}
