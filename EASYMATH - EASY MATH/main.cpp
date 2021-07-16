#include <iostream>
using namespace std;
int n,m,a,d,j,x[4],y;
int main()
{
    cin>>j;
    for(int i=1;i<=j;i++)
        {
             cin>>n>>m>>a>>d;
        x[0] = a;
		x[1] = a + d;
		x[2] = a + 2 * d;
		x[3] = a + 3 * d;
		for(int q=1;q<=m-n;q++)
            {
                if(x[0]%(m-q)!=0)
                    y++;
               else if(x[1]%(m-q)!=0)
                    y++;
               else if(x[2]%(m-q)!=0)
                    y++;
               else if(x[3]%(m-q)!=0)
                    y++;
            }
            cout<<y<<endl;
            y=0;
        }

    return 0;
}
