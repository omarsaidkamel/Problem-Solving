#include <iostream>
using namespace std;
int a,b;bool f;char c;
int main()
{
    cin>>a>>b;
    for(int i=0;i<a;i++){
     for(int j=0;j<b;j++){
        cin>>c;
        if(c=='C'||c=='M'||c=='Y')f=true;
     }
    }
    cout<<(f==true?"#Color":"#Black&White");
    return 0;
}
