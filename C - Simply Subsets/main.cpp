#include <bits/stdc++.h>
using namespace std;
int main()
{
  int tmp,x,y;string line;
  stringstream ss;
  while(getline(cin, line)) {
    int c=0;
    vector<int> a, b;
    ss.clear();
    ss.str(line);
    while (ss >> tmp)
      a.push_back(tmp);
    getline(cin, line);
    ss.clear();
    ss.str(line);
    while (ss >> tmp)
      b.push_back(tmp);
      x=a.size(); y=b.size();
            for (int i = 0; i < x; i++) {
            for (int j = 0; j < y; j++) {
              if (a[i] == b[j])
                c++;
            }
          }
       if (c == x&& c == y)  puts("A equals B");
       else if (c == x)  puts("A is a proper subset of B");
       else if (c == y)  puts("B is a proper subset of A");
       else if (c == 0)  puts("A and B are disjoint");
       else  puts("I'm confused!");
    }
    return 0;
}
