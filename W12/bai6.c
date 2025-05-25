#include <stdio.h>
int countEven(int* arr, int size) {
    int i;
    int count =0;
    for (i=0; i<size; i++)
    if (*(arr+i) % 2 == 0) count++;
    return count;
}
int main() {
    int size;
    int a[100];
    printf("Nhap so luong phan tu: ");
    scanf("%d", &size);
    printf("Nhap cac phan tu cua A: ");
    for (int i=0; i<size; i++) {
        scanf("%d", &a[i]);
    }
    printf("So luong phan tu chan trong mang A la: %d", countEven(a, size));
    return 0;
}