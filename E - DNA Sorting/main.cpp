#include <iostream>
#include <algorithm>
using namespace std;
const int N = 105;
int t, n, m;
string A[N];
int countInversions(string s) {
  int as = 0, cs = 0, gs = 0, ts = 0 ,ret = 0 ;
  for (int i = 0; i < s.length(); i++) {
    if (s[i] == 'A') {
      ret += cs + gs + ts;
      as++;
    }
    if (s[i] == 'C') {
      ret += gs + ts;
      cs++;
    }
    if (s[i] == 'G') {
      ret += ts;
      gs++;
    }
    if (s[i] == 'T') ts++;
  }
  return ret;
}
bool cmp(string a, string b) { return countInversions(a) < countInversions(b);}

int main() {
  scanf("%d", &t);
  while(t--) {
    scanf("%d %d", &m, &n);
    for (int i = 0; i < n; i++) {
      cin >> A[i];
    }
    stable_sort(A, A+n, cmp);
    for (int i = 0; i < n; i++) {
      cout << A[i] << endl;
    }
    if (t)
     puts("");
  }
  return 0;
}
