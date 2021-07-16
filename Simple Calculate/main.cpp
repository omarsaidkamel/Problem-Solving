#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x,y,v,b;float d,m;
    cin>>x>>y>>d>>v>>b>>m;
    cout << "VALOR A PAGAR: R$ "<<fixed<<setprecision(2)<<((y*d)+(b*m))<< "\n";
    return 0;
}
