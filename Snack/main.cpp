#include <bits/stdc++.h>
using namespace std;
int main()
{
    float b,a,c1=4.00,c2=4.50,c3=5.00,c4=2.00,c5=1.50,v=0.00;
    cin>>a>>b;
    if(a==1){
        for(int i=0;i<b;i++){
            v+=c1;
        }
        cout<<"Total: R$ "<<fixed<<setprecision(2)<<v<<"\n";
    }
    else if(a==2){
        for(int i=0;i<b;i++){
            v+=c2;
        }
        cout<<"Total: R$ "<<fixed<<setprecision(2)<<v<<"\n";
    }
    else if(a==3){
        for(int i=0;i<b;i++){
            v+=c3;
        }
        cout<<"Total: R$ "<<fixed<<setprecision(2)<<v<<"\n";
    }
    else if(a==4){
        for(int i=0;i<b;i++){
            v+=c4;
        }
        cout<<"Total: R$ "<<fixed<<setprecision(2)<<v<<"\n";
    }
    else{
        for(int i=0;i<b;i++){
            v+=c5;
        }
        cout<<"Total: R$ "<<fixed<<setprecision(2)<<v<<"\n";
    }
    return 0;
}
