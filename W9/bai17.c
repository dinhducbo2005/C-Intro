#include <stdio.h>
float tinhTong(int n) {
    float i, sum = 0.0;
    for (i = 1; i<=n; i++) {
        sum+=(1/i);
    }
    return sum;
}

int main() {
    int n;
    scanf("%d", &n);
    printf("Tong la: %.2f", tinhTong(n));
    return 0;
}

