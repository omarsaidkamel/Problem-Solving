#include <iostream>
using namespace std;
int main()
{
    int n,a;bool p = false,ne = false;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&a);
        if(a % 2 == 0)printf("%d\n",a/2);
        else {
                if(a>0){
                 if(p){printf("%d\n",(a/2)+1);p = false;ne=true;}
                 else{printf("%d\n",a/2);p = true;ne = false;}
                }
                else if(a<0) {
                 if(ne){printf("%d\n",(a/2)-1);p=true;ne=false;}
                 else {printf("%d\n",(a/2));p=false;ne=true;}
                }
        }
    }
    return 0;
}
