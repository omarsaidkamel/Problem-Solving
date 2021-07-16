#include <iostream>
using namespace std;
int main()
{
    string s,d;int l,r;
    cin>>s>>d;
    int n=s.size();
    int m=d.size();
    for(int i=0;i<n;i++){
        if(s[i]=='|') {
            l=i;r=n-i-1;
            break;
        }
    }
    if(r>l+m||r+m<l)
        printf("Impossible");
    else if(r>l){
        if(m==r-l){
           for(int i=0;i<n;i++){
              if(s[i]=='|'){
                cout<<d<<'|';
              }
              else cout<<s[i];
           }
        }
            else if((r+l)%m==0){
               for(int i=0;i<n;i++){
                  if(s[i]=='|'){
                   for(int j=0;j<m-l;j++)cout<<d[j];
                   cout<<'|';
                  }
                  else cout<<s[i];
               }
              for(int j=m-l;j<m;j++)cout<<d[j];
            }
        else printf("Impossible");
    }
   else if(l>r){
         if(m==l-r){
                cout<<s;
           for(int i=0;i<l-r;i++){
                cout<<d[i];
           }
        }

        else if(m%2==0){
               for(int i=0;i<n;i++){
                  if(s[i]=='|'){
                   for(int j=0;j<m-l-1;j++)cout<<d[j];
                   cout<<'|';
                  }
                  else cout<<s[i];
               }
              for(int j=m-l;j<m;j++)cout<<d[j];
            }

        else printf("Impossible");
    }


    else {
      if(m%2==0){
          for(int i=0;i<n;i++){
         if(s[i]=='|'){
               for(int j=0;j<m/2;j++)cout<<d[j];
               cout<<'|';
              }
              else cout<<s[i];
           }
         for(int j=m/2;j<m;j++)cout<<d[j];
      }
      else printf("Impossible");
    }

    return 0;
}
   /* if(l<r){
         if(l+r==m){
          for(int i=0;i<n;i++){
             if(s[i]=='|'){
                for(int j=0;j<m-l;j++) cout<<d[j];
                cout<<'|';
             }
             else cout<<s[i];
          }
            for(int j=m-l;j<m;j++) cout<<d[j];
        }
       else  if(l+m>=r){
             for(int i=0;i<r-l;i++)cout<<d[i];
             cout<<s;
        }
        else printf("Impossible");
    }

    else if(l>r){
        if(l+r==m){
            for(int i=0;i<n;i++){
              if(s[i]=='|'){
                 for(int j=0;j<m-l;j++) cout<<d[j];
                cout<<'|';
              }
              else cout<<s[i];
           }
             for(int j=m-l;j<m;j++) cout<<d[j];
         }
       else  if(l<=r+m){
             cout<<s;
             for(int i=0;i<l-r;i++)cout<<d[i];
        }
        else printf("Impossible");
    }
    else if(l==r&&m%2==0){
        for(int i=0;i<n;i++){
              if(s[i]=='|'){
                 for(int j=0;j<m/2;j++) cout<<d[j];
                cout<<'|';
              }
              else cout<<s[i];
           }
             for(int j=m/2;j<m;j++) cout<<d[j];
    }
    else printf("Impossible");*/
