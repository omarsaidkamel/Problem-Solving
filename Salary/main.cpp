#include <iostream>
#include<iomanip>
using namespace std;
int main()
{double o; int n,m;
 while(cin>>n>>m>>o)
    {
        cout<<"NUMBER = "<<n<<"\n";
    cout<<"SALARY = U$ "<<fixed<<setprecision(2)<<m*o<<"\n";
    }
    return 0;
}
