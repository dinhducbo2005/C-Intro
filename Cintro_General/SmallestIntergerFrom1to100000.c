#include <stdio.h>
int main() {
    int a, b, c, d, e, f, N=0;
    scanf(" %d %d", &a, &b);
    scanf(" %d %d", &c, &d);
    scanf(" %d %d", &e, &f);

    for (int i=1; i<=100000; i++) {
        if (i%a==b && i%c==d && i%e==f) {
            N = i;
            break;
        }
    }
    if (N!=0) {
        printf("%d", N);
    } else printf("-1");
}