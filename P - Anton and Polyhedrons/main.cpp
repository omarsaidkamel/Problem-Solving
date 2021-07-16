#include <iostream>
using namespace std;
string c;int a,x;
int main()
{
    cin>>a;
    while(a--)
        {
            cin>>c;
    if(c=="Tetrahedron")
        x+=4;
    if(c=="Cube")
        x+=6;
    if(c=="Octahedron")
        x+=8;
    if(c=="Dodecahedron")
        x+=12;
    if(c=="Icosahedron")
        x+=20;
        }
        cout<<x;
    return 0;
}
