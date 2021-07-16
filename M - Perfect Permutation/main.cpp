#include <iostream>
using namespace std;
int n,a[109];
int main()
{
    scanf("%d",&n);
    for(int i=1;i<=n;i++) a[i]=i;
            if(n%2){
      printf("-1");
      }
      else {
         for(int i=1;i<n;i++) {swap(a[i],a[i+1]);i++;}
      for(int i=1;i<=n;i++) printf("%d ",a[i]);
      }
    return 0;
}
/*
	long n;
	cin >> n;

	if(n%2)
		cout << -1 << endl;
	else{
		while(n--)
			cout << n+1 << " ";
	}
}*/
