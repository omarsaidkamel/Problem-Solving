#include <iostream>
using namespace std;
int main()
{
    int t,n,sum,a[4]={1,3,6,10};string s;
    scanf("%d",&t);
    while(t--){
      cin>>s;int n = s.size();
      sum = (((s[0]-'0')-1)*10)+a[n-1];
      printf("%d\n",sum);
    }
    return 0;
}
