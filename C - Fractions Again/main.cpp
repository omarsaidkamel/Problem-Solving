#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    while(cin>>n){
         vector<pair<int, int> > s;
        for(int i=n+1;i<=n*2;i++){
            if((n * i) % (i - n) == 0)
                s.push_back(make_pair((n * i) / (i - n), i));
        }
         cout << s.size() << endl;
        for(int i = 0; i < s.size(); i++){
            printf("1/%d = 1/%d + 1/%d\n",n,s[i].first,s[i].second);
        }
    }
    return 0;
}
