#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,a,b;
    while(scanf("%d",&n)){
      priority_queue <int>p_q;
      stack<int>s;
      queue<int>q;
      //int q=0,s=0,p_q=0,last,firt,big=-1000;
      bool p_qb=true,sb=true,qb=true;
      while(n--){
        scanf("%d%d",&a,&b);
        if(a==1){
            if(p_qb) p_q.push(b);
            if(qb) q.push(b);
            if(sb) s.push(b);
        }
        if(a==2){
          if (sb) {
					if (s.empty() || s.top() != b) sb = false;
					else  s.pop();
				}
				if (qb) {
					if (q.empty() || q.front() != b) qb = false;
					else q.pop();
				}
				if (p_qb) {
					if (p_q.empty() || p_q.top() != b) p_qb = false;
					else p_q.pop();
				}
        }
      }
        if (sb == true && qb == false && p_qb == false) puts("stack");
		else if (sb == false && qb == true && p_qb == false) puts("queue");
		else if (sb == false && qb == false && p_qb == true) puts("priority queue");
		else if (sb == false && qb == false && p_qb == false) puts("impossible");
		else puts("not sure");
    }
    return 0;
}
/*        scanf("%d%d",&a,&b);
        if(a==1){
            if(firstb==false){
                firstb=true;
                firt=b;
            }
            last=b;
            if(big<b)big=b;
        }
        if(a==2&&cheak==false){
            if(b==firt) q=1;
            if(b==last) s=1;
            if(b==big) p_q=1;
            cheak=true;
        }
      }
        if(q+s+p_q>1)puts("not sure");
        else if(q==1)puts("queue");
        else if(s==1)puts("stack");
        else if(p_q==1)puts("priority queue");
        else puts("impossible");*/
