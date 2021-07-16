#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,R[11],F[11],x;
    double Dive[1002];
    while(scanf("%d",&n)&&n){x=0;scanf("%d",&m);
        for(int i=0;i<n;i++)scanf("%d",F+i);
        for(int i=0;i<m;i++)scanf("%d",R+i);
        for(int i=0;i<n;i++){
          for(int j=0;j<m;j++){
            Dive[x]= (double)R[j] / (double)F[i];x++;
          }
        }
        sort(Dive,Dive+x);
        double h =-1;
		for (int i = 0; i < x - 1; i++) {
			h = max(h,Dive[i + 1] / Dive[i]);
		}

		printf("%.2lf\n",h);
    }
    return 0;
}
