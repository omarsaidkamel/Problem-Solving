#include <iostream>
#include <set>
using namespace std;
int main()
{
    int n,k,m,c=0;
    scanf("%d%d",&n,&k);
    while(n--){
        scanf("%d",&m);
        set<int>s;
         while(m>0){
            if(m%10<=k)
               s.insert(m%10);
              m/=10;
         }
        if(s.size()==k+1)
            c++;
    }
    printf("%d",c);
    return 0;
}
