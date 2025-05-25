#include <stdio.h>
int main() {
    int i, j;
    printf("   \tI%13cJ\n", " ");
    for(i=1; i<4; i++) {
        printf("Outer %6d\n", i);
        for(j=0; j<i; j++) {
            printf("\tInner%9d\n", j);
        }
    }
}