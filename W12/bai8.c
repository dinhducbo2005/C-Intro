#include <stdio.h>
void getSales(float *array, int size) {
    for (int i=0; i<size; i++) {
        scanf("%f", &array[i]);
    }
}
float totalSales(float *array, int size) {
    float sum = 0.0;
    for (int i=0; i<size; i++) {
        sum += array[i];
    }
    return sum;
}
int main() {
    float sales[4];
    getSales(sales, 4);
    printf("%.1f", totalSales(sales, 4));
    return 0;
}