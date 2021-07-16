#include <iostream>
using namespace std;
int main() {
  int m;
  while (scanf("%d", &m) != EOF) {
    int A[10002][2], B[10002][2], c1 = 0, c2 = 0;
    char ch;
    getchar();
    for (int i = 1; i <= m; ++i) {
      for (int j = 1; j <= m; ++j) {
        ch = getchar();
        if (ch == '1') {
          A[c1][0] = i; A[c1++][1] = j;
        } else if (ch == '3') {
          B[c2][0] = i; B[c2++][1] = j;
        }
      }
      getchar();
    }
    int ans = 0, x;
    for (int i = 0, mini = 100000; i < c1; ++i, mini = 100000) {
      for (int j = 0; j < c2; ++j) {
        x = abs(B[j][0] - A[i][0]) + abs(B[j][1] - A[i][1]);
        if (x < mini) mini = x;
      }
      if (ans < mini) ans = mini;
    }
    printf("%d\n", ans);
  }
  return 0;
}
