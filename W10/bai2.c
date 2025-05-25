#include <stdio.h>
#define MONTHS 12
int main() {
    int rainfall[MONTHS];
    printf("Nhap luong mua cua tung thang.\n");
    for (int i=1; i<=MONTHS; i++) {
        printf("Luong mua cua thang %d: ", i);
        scanf("%d", &rainfall[i]);
    }
    printf("Thang\tLuong mua (mm)\n");
    for (int i=1; i<=MONTHS; i++) {
        printf("%d\t%d\n", i, rainfall[i]);
    }
    return 0;
}
