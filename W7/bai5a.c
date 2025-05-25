#include <stdio.h>

int main() {
    int n;
    int i;
    int sum = 0;
    scanf("%d", &n);
    for (i=0; i<n; i++) {
        int x;
        scanf("%d", &x);
        sum += x*x;
    }
    float tbc = (float)(sum)/n;
    printf("Tong binh phuong la: %d\n", sum);
    printf("Trung binh cong la: %.2f\n", tbc);
}
