#include <stdio.h>

int main() {
    int x, y, z;
    int *ptr;
    printf("\nNhap 3 so: ");
    scanf("%d %d %d", &x, &y, &z);
    ptr = &x;
    *ptr += 100;
    printf("x + 100 = %d\n", *ptr);
    ptr = &y;
    *ptr += 100;
    printf("y + 100 = %d\n", *ptr);
    ptr = &z;
    *ptr += 100;
    printf("z + 100 = %d\n", *ptr);
    return 0;
}

