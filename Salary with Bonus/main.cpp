#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;double x,y;
    cin>>s>>x>>y;
    cout<<"TOTAL = R$ "<<fixed<<setprecision(2)<<(x+((y*15)/100))<<"\n";
    return 0;
}
