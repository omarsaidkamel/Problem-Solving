#include <iostream>
#include<cmath>
using namespace std;
unsigned int c,m,h;
int main()
{
    cin>>c;
           for(int j=0;j<c;j++)
           {
               cin>>m;
             h=(int)sqrt(m);
          cout<<(h*h==m?"yes\n":"no\n");
           }
    return 0;
}
