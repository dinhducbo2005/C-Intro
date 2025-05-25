#include <stdio.h>
#include <math.h>
const int MAX = 10;
int main() {
    int A[MAX];
    int i, n;
    int *ptr[MAX];
    int sum = 0;
    scanf("%d", &n);
    for (i=0; i<n; i++) {
        scanf("%d", &A[i]);
        ptr[i] = &A[i];
        sum += *ptr[i]; 
    }
    float avg = (float)sum/n;
    printf("%.2f\n", avg);
    float phuongsai = 0;
    for (int i=0; i<n; i++) {
        phuongsai += pow(*ptr[i] - avg, 2);
    }
    phuongsai /= n;
    float dolechchuan = sqrt(phuongsai);
    printf("%.2f", dolechchuan);
    return 0;
}