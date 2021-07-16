#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s,x;map<string,string>ma;
    while(getline(cin,s)){
        if(s=="")break;
        stringstream ss(s);
        ss>>s>>x;
        ma[x]=s;
    }
    while(cin>>s){
            auto it = ma.find(s);
        if(it !=ma.end()){
           cout<<it->second<<"\n";
        }
        else puts("eh");
    }
    return 0;
}
