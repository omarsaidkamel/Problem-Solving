#include <iostream>
using namespace std;
int task,i,j,y,d,m,yl,dl,ml,yh,dh,mh;string sl,s,sh;
int main()
{
    cin>>task;
    int u=task;
    while(task!=0){
        cin>>s>>d>>m>>y;
          if(u==task){sl=s;dl=d;ml=m;yl=y;sh=s;dh=d;mh=m;yh=y;}
           else if(y<yl){sl=s;dl=d;ml=m;yl=y;}
            else if(y>yh) {sh=s;dh=d;mh=m;yh=y;}
            else if(y==yh){
                if(mh<m){sh=s;dh=d;mh=m;yh=y;}
                else if(mh==m){
                    if(dh<d){sh=s;dh=d;mh=m;yh=y;}
                }
            }
             else if(y==yl){
                      if(ml>m){sl=s;dl=d;ml=m;yl=y;}
                  else if(ml==m){
                     if(dl>d){sl=s;dl=d;ml=m;yl=y;}
                 }
             }
    task--;
          }
     cout<<sh<<"\n"<<sl<<endl;
    return 0;
}
