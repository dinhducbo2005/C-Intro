#include <stdio.h>

int calc_sum(int arr[], int size) {
    int i=0; 
    int sum=0;
    for (i=0; i<size; i++) {
        sum+=arr[i];
    }
    return sum;
}

int main() {
    int arr[1000], size;
    scanf("%d", &size);
    for (int i=0; i<size; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Tong cac phan tu cua mang la %d\n", calc_sum(arr, size));
    return 0;
}
