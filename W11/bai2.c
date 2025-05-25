#include <stdio.h>

int main() {
    int x, y, z;
    int *p;
    printf("Nhap 3 so nguyen: ");
    scanf("%d%d%d", &x, &y, &z);
    printf("3 so nguyen la: \n");
    p = &x;
    printf("x = %d --> %p\n", *p, p);
    p = &y;
    printf("y = %d --> %p\n", *p, p);
    p = &z;
    printf("z = %d --> %p\n", *p, p);
    return 0;
}

