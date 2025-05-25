#include <stdio.h>
int main() {
    float n, count=0.0, sum=0.0, avg=0.0;
    while (1) {
        scanf("%f", &n);
        if(n<0) break;

        count++;
        sum+=n;
        avg=(sum/count);
    }
    printf("%.2f", avg);
}