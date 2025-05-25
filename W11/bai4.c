#include <stdio.h>
void swapChuan(int *px,  int *py) {
    int tmp = *px;
    *px = *py;
    *py = tmp;
}
void swapLoi(int x, int y) {
    int tmp = x;
    x = y; 
    y = tmp;
}
int main() {
    int a, b;
    scanf("%d\n%d", &a, &b);

    swapLoi(a, b);
    printf("Ket qua loi: a = %d, b = %d\n", a, b);

    swapChuan(&a, &b);
    printf("Ket qua dung: a = %d, b = %d\n", a, b);

    return 0; 
}


