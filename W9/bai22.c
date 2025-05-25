#include <stdio.h>

float mySinh(float x) {
    float pt = x;
    float sum = x;
    int n = 1;

    while (1) {
        pt *= x * x / ((2 * n) * (2 * n + 1)); 
        if (pt < 1e-10 && pt > -1e-10)       
            break;
        sum += pt;
        n++;
    }

    return sum;
}

int main() {
    float x;
    scanf("%f", &x);
    printf("mySinh(%.2f) = %.2f\n", x, mySinh(x));
    return 0;
}
