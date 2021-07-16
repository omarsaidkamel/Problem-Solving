#include <iostream>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int n=s.length();
    for(int i=0;i<n;i++){
if(s[i]=='u'&&s[i+1]=='s'&&s[i+2]=='e'&&s[i+3]=='r'&&s[i+4]=='n'&&s[i+5]=='a'&&s[i+6]=='m'&&s[i+7]=='e')
{   i+=9;cout<<"username: ";
   while(s[i]>='a'&&s[i]<='z'||s[i]>='A'&&s[i]<='Z')
        {cout<<s[i];i++;}
        cout<<"\n";
}
if(s[i]=='p'&&s[i+1]=='w'&&s[i+2]=='d'){
        i+=4;
        cout<<"pwd: ";
    while(s[i]>='a'&&s[i]<='z'||s[i]>='A'&&s[i]<='Z')
        {cout<<s[i];i++;}
        cout<<"\n";
}
if(s[i]=='p'&&s[i+1]=='r'&&s[i+2]=='o'&&s[i+3]=='f'&&s[i+4]=='i'&&s[i+5]=='l'&&s[i+6]=='e'){
        i+=8;
        cout<<"profile: ";
    while(s[i]>='a'&&s[i]<='z'||s[i]>='A'&&s[i]<='Z')
        {cout<<s[i];i++;}
        cout<<"\n";
}
if(s[i]=='r'&&s[i+1]=='o'&&s[i+2]=='l'&&s[i+3]=='e'){
        i+=5;
        cout<<"role: ";
    while(s[i]>='a'&&s[i]<='z'||s[i]>='A'&&s[i]<='Z')
        {cout<<s[i];i++;}
        cout<<"\n";
    }
 if(s[i]=='k'&&s[i+1]=='e'&&s[i+2]=='y'){
        i+=4;
        cout<<"key: ";
    while(s[i]>='a'&&s[i]<='z'||s[i]>='A'&&s[i]<='Z')
        {cout<<s[i];i++;}
        cout<<"\n";
    }
}
    return 0;
}
