#include <iostream>
#include <map>
using namespace std;
int main()
{
    int c,m,d;string s;map<string ,int >ma;
    scanf("%d",&c);
    for(int i=1;i<=c;i++){
            ma.clear();
        scanf("%d",&m);
        for(int j=0;j<m;j++){
          cin>>s>>d;
          ma[s]= d;
        }
        cin>>d>>s;
        auto it =ma.find(s);
        if(it!=ma.end()){
             int u = ma[s];
            if(u<=d) printf("Case %d: Yesss\n",i);
            else if(u>d&&u<=d+5)printf("Case %d: Late\n",i);
            else printf("Case %d: Do your own homework!\n",i);
        }
        else printf("Case %d: Do your own homework!\n",i);
    }
    return 0;
}
