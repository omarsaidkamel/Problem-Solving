#include <iostream>
#include<algorithm>
using namespace std;
int a[100000],i;string s;
int main()
{
    cin>>s;i=s.size();
    sort(s.begin(),s.end());
                cout<<s[i/2];
       if(i!=1)
          {
            for(int x=(i/2)+1;x<i;x++)

              if(s[x]!='+') cout<<'+'<<s[x];
           }
    return 0;
}
