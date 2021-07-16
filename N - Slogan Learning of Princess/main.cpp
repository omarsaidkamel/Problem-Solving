#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,m,j;
    char ch;
    string a[50],slogan;
    cin>>n;
    getchar();
    n*=2;
    for(i=0;i<n;i++) getline(cin,a[i]);
    cin>>m;
    getchar();
    for(j=0;j<m;j++)
    {
        getline(cin,slogan);
        for(i=0;i<n;i++)
        {
            if(a[i]==slogan)
            {
                cout<<a[i+1]<<"\n";
                break;
            }
        }
    }
    return 0;
}
