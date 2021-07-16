#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>v;
    map<int,int>ma;int n;
   while (scanf("%d", &n) != EOF) {
		if (ma.count(n) == 0){
            ma[n] = 1;
            v.push_back(n);
         }
			else ma[n]++;
	}
    for(int i =0; i<v.size();i++){
        cout<<v[i]<<" "<<ma[v[i]]<<"\n";
    }
    return 0;
}
