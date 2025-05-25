#include <stdio.h>
#include <math.h>

int gptb2(float a, float b, float c, float *x1, float *x2) {
    float delta;
    int result = -1;
    if (a == 0) {
        result = 3;
    } else {
        delta = b*b - 4*a*c;
        if (delta > 0) {
            result = 1;
            *x1 = (-b + sqrt(delta))/2/a;
            *x2 = (-b - sqrt(delta))/2/a;
        } else if (delta == 0) {
            result = 0;
            *x1 = *x2;
            *x1 = -b/2/a;
        } else {
            result = 2;
        }
    }
    return result;
}

int main() {
    float a, b, c, x1, x2;
    int result;
    printf("Nhap he so a, b, c (a.x^2 + b.x + c = 0): ");
    scanf("%f%f%f", &a, &b, &c);
    result = gptb2(a, b, c, &x1, &x2);
    printf("Ket qua cua phuong trinh la: ");
    if (result == 0) {
        printf("%.2f", x1);
    }
    if (result == 1) {
        printf("%.2f %.2f", x1, x2);
    }
    if (result == 2) {
        printf("VO NGHIEM");
    }
    if (result == 3) {
        printf("SUY BIEN BAC 1");
    }
    return 0;
}