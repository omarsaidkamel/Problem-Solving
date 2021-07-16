#include <bits/stdc++.h>
using namespace std;
int n,j,c,i,a[1009];
int main() {
	scanf("%d",&n);
	for(int i=0;i<n;i++)scanf("%d",&a[i]);
	sort(a,a+n);
	while(i<n && j<n){
		if(a[i]<a[j]){
			c++;i++;
		}
		j++;
	}
	printf("%d",c);
	return 0;
}
/*#include <bits/stdc++.h>
using namespace std;
int n,a[10009],b[10009],c,f;
int main()
{
    scanf("%d",&n);
    for(int i=0;i<n;i++) scanf("%d",&a[i]);
    sort(a,a+n);
    b[0]=a[0];
    for(int i=0;i<n;i++){
       int  mi=1001;
        for(int j=0;j<n;j++){
            if(b[i]!=a[j]&&b[i]<a[j]&&a[j]<mi&&a[j]!=-1) {
                    mi=a[j];f=j;
            }
        }
        a[0]=-1;
    if(mi==1001){b[i+1]=a[i];a[i]=-1;}
    else
        {b[i+1]=mi;a[f]=-1;}
    }
    for(int i=0;i<n-1;i++){
        if(b[i]<b[i+1]) c++;
    printf("%d ",b[i]);    }
    printf("\n%d",c);
    return 0;
}*/
