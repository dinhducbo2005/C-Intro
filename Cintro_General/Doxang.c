#include <stdio.h>
int main() {
    float cap, pow, len;
    scanf("%f %f %f", &cap, &pow, &len);

    printf("%d", (int)(len/cap/pow));
    return 0;
}