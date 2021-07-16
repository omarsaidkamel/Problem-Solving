#include <iostream>
using namespace std;
string s;int x,z,i,j;
int main()
{
    cin>>s;
    z=s.size();
    if(z==1)
    {cout<<"YES"; return 0;}
    j=z-1;
    for(i=0;i<z/2;i++)
        {
          if(s[i]!=s[j])x++;
             j--;
        }
        if(x==0&&z%2==1)
            cout<<"YES";
        else if(x==1)
        cout<<"YES";
        else
            cout<<"NO";
    return 0;
}
