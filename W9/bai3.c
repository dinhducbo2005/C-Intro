#include <stdio.h>

int giaithua(int);

int main() {
    int num;
    printf("Nhap so nguyen: ");
    scanf("%d", &num);

    printf("%d! = %d\n", num, giaithua(num));
    return 0;
}

int giaithua(int a) {
    int i, gt = 1;
    for (int i=1; i<=a; i++) {
        gt*=i;
    }
    return gt;
}

