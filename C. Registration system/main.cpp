#include <iostream>
#include <map>
using namespace std;
int main()
{
    string s;int n;map<string,int>M;
    scanf("%d",&n);
    while(n--){
        cin>>s;
        if(M[s]<1){puts("OK");M[s]++;}
        else{
           cout<<s<<M[s]++<<"\n";
        }
    }
    return 0;
}
