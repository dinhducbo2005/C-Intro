#include <stdio.h>

void print(int x, int y, int z, int *p, int *q, int *r) {
    printf("x = %d\ny = %d\nz = %d\n", x, y, z);
    printf("p = %p\nq = %p\nr = %p\n", p, q, r);
    printf("*p = %d\n*q = %d\n*r = %d\n", *p, *q, *r);
}
void swapValue(int *x, int *y, int *z) {
    int tmp;
    tmp = *x;
    *x = *y;
    *y = *z;
    *z = tmp;
}
void swapPointer(int **p, int **q, int **r) {
    int *tmp;
    tmp = *p;
    *p = *q;
    *q = *r;
    *r = tmp;
}
int main() {
    int x = 1, y = 2, z = 3;
    int *p = &x, *q = &y, *r = &z;

    printf("Cau 1:\n");
    print(x, y, z, p, q, r);

    printf("Cau 2:\n");
    swapValue(&x, &y, &z);
    print(x, y, z, p, q, r);

    printf("Cau 3:\n");
    swapPointer(&p, &q, &r);
    print(x, y, z, p, q, r);
    return 0;
}