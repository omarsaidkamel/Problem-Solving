#include<iostream>
#include <cmath>
using namespace std;
int main(){
    int n;
    scanf("%d", &n);
    while(n--){
        int x;
        scanf("%d", &x);
        int a = (int)sqrt(x);
        printf("%d\n", a);
    }
}
