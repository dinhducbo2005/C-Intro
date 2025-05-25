#include <stdio.h>

int lowestCommonMultiple(int a, int b) {
    int bcnn=0, n;
    if (a>b) n = a;
    else n = b;
    while (1) {
        if (n%a==0 && n%b==0) {
            return n;
        }
        n++;
    }
}

int main() {
    int a, b;
    scanf("%d", &a);
    scanf("%d", &b);
    printf("%d", lowestCommonMultiple(a, b));
    return 0;
}