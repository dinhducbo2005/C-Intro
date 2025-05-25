#include <stdio.h>
int main() {
    int slg;
    scanf("%d", &slg);
    if (slg%4!=0) {
        printf("%d", (slg/4)+1);
    } else printf("%d", slg/4);
    return 0;
}