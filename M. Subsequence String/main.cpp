#include <iostream>
using namespace std;
char d[100007];string s;int j=0;
int main()
{
    cin>>s;
    int n=s.length();
    for(int i=0;i<n;i++){
        if(s[i]!=s[i+1]) {
                if(s[i]=='l'&&s[i-1]=='l')
                    {d[j]=s[i];d[j+1]='l';j+=2;}
                else
                    {d[j]=s[i];j++;}
        }
    }
   /*khhjsakjshhhsdjhkjahellsasdlksjlhellosdsajkdkajsdjdjjdksks
     uasdhuiassadsaellohellkjskjhelolskjsalksa*/
     for(int i=0;i<j;i++){
        if(d[i]=='h'&&d[i+1]=='e'&&d[i+2]=='l'&&d[i+3]=='l'&&d[i+4]=='o')
               {printf("YES");return 0;}
      }
    printf("NO");
    return 0;
}
