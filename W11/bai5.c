#include <stdio.h>

void swap(int *a, int *b, int *c) {
    int tmp = *a;
    *a = *b;
    *b = *c; 
    *c = tmp;
}

int main() {
    int a, b, c;
    printf("Nhap 3 so a, b, c: ");
    scanf("%d\n%d\n%d", &a, &b, &c);
    printf("3 so moi nhap la:\na = %d\nb = %d\nc = %d\n", a, b, c);
    swap(&a, &b, &c);
    printf("3 so sau khi doi cho la:\na = %d\nb = %d\nc = %d", a, b, c);
    return 0;
}