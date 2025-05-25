#include <stdio.h>

float myArtctan(float x) {
    float pt = x;
    float sum = x;
    int n = 1;

    while (1) {
        pt *= -x * x;                       
        float next = pt / (2 * n + 1);
        if (next < 1e-10 && next > -1e-10)
            break;
        sum += next;
        n++;
    }

    return sum;
}

int main() {
    float x;
    scanf("%f", &x);
    printf("myArtctan(%.2f) = %.2f\n", x, myArtctan(x));
    return 0;
}
