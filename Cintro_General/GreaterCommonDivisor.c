#include <stdio.h>
int main() {
    int a, b, u, ucln=0;
    scanf("%d %d", &a, &b);
    if(a<b) {
        u=a;
    } else u=b;
    for (int i=1; i<=u; i++) {
        if (a%i==0 && b%i==0) {
            ucln=i;
        }
    }
    printf("%d", ucln);
    return 0;
}