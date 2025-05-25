#include <stdio.h>

void reverse(int *a, int size) {
    int i = 0, j = size - 1, tmp;
    while (i<j) {
        tmp = *(a+i);
        *(a+i) = *(a+j);
        *(a+j) = tmp;
        i++;
        j--;
    }
}
int main() {
    int size, *a;
    printf("Nhap so phan tu cua mang: ");
    scanf("%d", &size);
    printf("Nhap phan tu cua mang: ");
    for (int i=0; i<size; i++) {
        scanf("%d", &a[i]);
    }
    reverse(a, size);
    printf("Mang sau khi dao nguoc la: ");
    for (int i=0; i<size; i++) {
        printf("%d ", *(a+i));
    }
}