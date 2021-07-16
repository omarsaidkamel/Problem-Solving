#include <iostream>
#include <map>
using namespace std;
int main()
{
    map<string,int>ma;long long int  m,n,x;string s;
    scanf("%d%d",&m,&n);
    for(int i=0;i<m;i++){
        cin>>s>>x;
        ma[s]=x;
    }
    for(int i=0;i<n;i++){
        m=0;
        while(cin>>s&&s!=".") m  += ma[s];
        printf("%d\n",m);
    }
    return 0;
}
