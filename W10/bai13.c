#include <stdio.h>
void reverse(float a[], int size) {
    for (int i=0; i<size/2; i++) {
        float tmp = a[i];
        a[i] = a[size-1-i];
        a[size-1-i] = tmp;
    }
}
int main() {
    float a[100];
    int size;
    printf("Kich thuoc mang la: ");
    scanf("%d", &size);
    printf("Nhap mang: ");
    for (int i=0; i<size; i++) {
        scanf("%f", &a[i]);
    }
    reverse(a, size);
    printf("Mang sau khi dao nguoc la:\n");
    for (int i=0; i<size; i++) {
        printf("%.2f ", a[i]);
    }
}
