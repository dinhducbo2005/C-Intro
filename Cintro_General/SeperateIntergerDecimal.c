#include <stdio.h>
int main() {
    float A, dec;
    scanf("%f", &A);
    int inter;
    if (A>=0) {
        for (int i=0; i<A; i++) {
            inter = i;
        }
        dec = A - inter;
        printf("%d %.2f", inter, dec);
    } else {
        for (int i=0; i>=A; i--) {
            inter = i;
        }
        dec = inter - A;
        printf("%d %.2f", inter-1, 1-dec);
    }
    return 0;
}