#include <iostream>
using namespace std;
bool lt,rt;long long sum,sum2;
int main()
{
    int x,y,n,l,r,ql,qr,a[(int)1e5+2];
    scanf("%d%d%d%d%d",&n,&l,&r,&ql,&qr);
    for(int i=0;i<n;i++)scanf("%d",&a[i]);
  if(l==r){
    for(int i=0;i<n;i++) sum+=a[i]*l;
    printf("%d",sum);
    return 0;
    }
  ///////////////////Right////////////////
    x=0;y=0; sum += r*a[n-x-1];x++;rt=true;lt = false;
    for(int i=0;i<n-1;i++){
      int vr=r*a[n-x-1],vl=l*a[y];
        if(vl < vr){
            if(lt) {
                if(vl + ql < vr)
                {sum += vl + ql;lt = true;rt = false;y++;}
                else {sum += vr ;rt = true;lt = false;x++;}
            }
            else {sum += vl; y++; lt = true;rt=false;}
        }
       else {
        if(rt) {
                if(vl > vr + qr )
                {sum += vr + qr;rt = true;lt = false;x++;}
                else {sum += vl ;lt = true;rt = false;y++;}
            }
            else  {sum += vr;x++; rt = true;lt=false;}
        }
      cout<<vl<<" "<<vr<<" "<<sum<<"\n";
    }
///////////////////left////////////////
    x=0;y=0; sum2 += l*a[y];y++;lt = true;rt = false;
    for(int i=1;i<n;i++){
      int vr=r*a[n-x-1],vl=l*a[y];
        if(vl < vr){
            if(lt) {
                if(vl + ql < vr)
                {sum2 += vl + ql;lt = true;rt = false;y++;}
                else {sum2 += vr ;rt = true;lt = false;x++;}
            }
            else {sum2 += vl; y++; lt = true;rt=false;}
        }
       else {
        if(rt) {
                if(vl > vr + qr )
                {sum2 += vr + qr;rt = true;lt = false;x++;}
                else {sum2 += vl ;lt = true;rt = false;y++;}
            }
            else  {sum2 += vr;x++; rt = true;lt=false;}
        }
      cout<<vl<<" "<<vr<<" sum2 = "<<sum2<<"\n";
    }
    printf("%lld",min(sum,sum2));
    return 0;
}
