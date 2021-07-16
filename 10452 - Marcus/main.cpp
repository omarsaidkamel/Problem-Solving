#include <iostream>
using namespace std;
int casetest,i,j,x,y,n,m;char a[100][100];string s="IEHOVA#";
int main()
{
    cin>>casetest;
    while(casetest--){
        int d=0;
        cin>>y>>x;
        for(i=1;i<=y;i++){
         for(j=1;j<=x;j++){
            cin>>a[j][i];
        if(a[j][i]=='@'){n=j;m=i;}
          }
        }
       while(a[n][m]!='#'){
          if(a[n][m-1]==s[d]){cout<<"forth";m--;d++;}
          else if(a[n-1][m]==s[d]) {cout<<"left";n--;d++;}
          else if (a[n+1][m]==s[d]) {cout<<"right";n++;d++;}
        cout<<(a[n][m]!='#'?" ":"");
        }
       cout<<"\n";
    }
    return 0;
}



//a[m-1][n]=='I'||a[m-1][n]=='E'||a[m-1][n]=='H'||a[m-1][n]=='O'||a[m-1][n]=='V'||a[m-1][n]=='A'
//a[m][n-1]=='I'||a[m][n-1]=='E'||a[m][n-1]=='H'||a[m][n-1]=='O'||a[m][n-1]=='V'||a[m][n-1]=='A'
//a[m][n+1]=='I'||a[m][n+1]=='E'||a[m][n+1]=='H'||a[m][n+1]=='O'||a[m][n+1]=='V'||a[m][n+1]=='A'
/*#include <iostream>
using namespace std;
int casetest,i,j,s,d,x,y,n,m;char a[10][10];
int main()
{
    cin>>casetest;
    while(casetest--){
        cin>>y>>x;
        for(i=0;i<y;i++){
         for(j=0;j<x;j++){
            cin>>a[j][i];
            if(a[j][i]=='#'){s=j;d=i;}
            if(a[j][i]=='@'){n=j;m=i;}
          }
        }
        for(i=0;i<m-d;i++)
        cout<<(i==m-d-1&&s==n?"forth":"forth ");
        if(n>s){
         for(i=0;i<n-s;i++)
        cout<<(i==n-s-1?"left":"left ");
        }
        else{
          for(i=0;i<s-n;i++)
            cout<<(i==s-n-1?"right":"right ");
        }
        cout<<endl;
    }
    return 0;
}*/
