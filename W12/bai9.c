#include <stdio.h>

int main() {
    int *ptrarray[4];
    int w, x, y, z;

    scanf("%d %d %d %d", &w, &x, &y, &z);

    ptrarray[0] = &w;
    ptrarray[1] = &x;
    ptrarray[2] = &y;
    ptrarray[3] = &z;
    int max = *ptrarray[0];
    for (int i=1; i<4; i++) {
        if (*ptrarray[i] > max) {
            max = *ptrarray[i];
        } 
    }
    printf("%d", max);
    return 0;
}