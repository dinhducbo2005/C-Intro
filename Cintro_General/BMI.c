#include <stdio.h>

int main() {
    float kg, m;
    scanf("%f %f", &m, &kg);
    printf("%.2f", kg/m/m);
    return 0;
}