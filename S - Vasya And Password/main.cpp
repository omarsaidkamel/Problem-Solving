#include <bits/stdc++.h>
using namespace std;
char s[1000];int i,m,a,b,c,n;
int main()
{
    cin>>m;
   while(m--){
        cin>>(s+1);
       n=strlen(s+1);
        for(i=1;i<=n;i++)
            {if(s[i]>='0'&&s[i]<='9')
                a=i;
                if(s[i]>='a'&&s[i]<='z')
                b=i;
                if(s[i]>='A'&&s[i]<='Z')
                c=i;
    }
    if(a==0)
       {
        for(i=1;i<=n;i++)
        if(i!=b&&i!=c)
        {s[i]='1';a=i;break;}
       }
		if(b==0)
		{
           for(i=1;i<=n;i++)
		  if(i!=a&&i!=c)
		  {s[i]='a';b=i;break;}
		}
		if(c==0)
		 {
           for(i=1;i<=n;i++)
		   if(i!=a&&i!=b)
		  {s[i]='A';c=i;break;}
		 }
     a=b=c=0;
    cout<<(s+1)<<endl;
    }
    return 0;
}
